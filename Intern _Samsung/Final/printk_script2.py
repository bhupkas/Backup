'''
Author: Aman Kumar , Bhupendra Kastore

This script adds a printk statement  in every function of a C file. The printk statement prints file name and entry function name.

Requirements:
	python 2.7
	PLY module (download: http://www.dabeaz.com/ply/ply-3.4.tar.gz )
Usage:
	input: Takes 4 inputs
		1. File containing typedefs datatypes arranged in a single column
		2. File containing macros arranged in a single column
		3. Root directory containing files/subdirectories  (all files in this directory will be converted)
		4. Output directory name
	
	Output:
		files with added printk statement in same hire achy as in root directory. 
'''
import ply.lex as lex
import os,re
write = 0
lock = 0
tokens = (
	'OTHER',
	'FSTART',
	'DEF',
	'STRUCT',
	'COMMENT',
	'SPECIAL'
)

t_FSTART	=  r"([a-zA-Z0-9]|\_)+ \s* \(   [^\(\)]*\s*[^\(\)]*    \) \s* \{"
t_DEF    	=  r"\#.*\n"
t_STRUCT 	=  r".*struct [^\(\);]* \{"# [\s .]* \}.*;"
t_OTHER 	=  r"[^\#].*;"
t_COMMENT	=  r"\/\*[\s\S]*?\*\/"#r"/\*(?>(?:(?>[^*]+)|\*(?!/))*)\*/"
t_SPECIAL	=  r".*=[^;]*[,=\{\?]?\n"
#t_ignore  = ' \t'
out = None
name = None
fname = None
valid = [1]
match = []
# Define a rule so we can track line numbers

def getword (w):
	x = w[0]
	c=0
	while x=='' and c<len(w):
		c = c +1
		x = w[c]
	if x[-1] == '*':
		x = x[:-1]
	return x
	
	
def t_newline(t):
	r'\n'
	t.lexer.lineno += len(t.value)
	out.write(t.value[0])

def getfirst(x):
	t = ''
	i=0
	le = len(x)
	while x[i] in [' ','\t','\n']:
		i = i+1
	while i != le and x[i] not in [' ','\t','\n']:
		t = t + x[i]
		i = i+1
	return t 
	
def t_error(t):
	#print "Illegal character '%s'" % t.value[0]
	global write,match,lock
	#word = getfirst(t.value)
	if (write == 1) and not lock and (t.value[0] not in ['\n',' ','\t','#']):# and (word not in match):
		#print t.value
		out.write('\nprintk (\" File : '+fname+' ENTRY : '+name+'\");\n')
		write = 0
	out.write(t.value[0])
	t.lexer.skip(1)
	
	
lexer = lex.lex()

'''
make a list of all typedef
'''
skip = raw_input("typedef file location: ")
type = open(skip,"r")

for line in type:
	match.append(line[:-1])

match1 = set(match)
match = list(match1)

'''
make a list of all macros
'''

skip2 = raw_input("macro file location: ")
macro = open(skip2,"r")
match2 = []
for x in macro:
	match2.append(x[:-1])

match1 = set(match2)
match2 = list(match1)	

def retr(foo):
	le = len(foo)
	re = ""
	for i in range(le):
		if foo[i] in ['(',' ']:
			break		
		re = re + foo[i]
	return re


def ftrace(filename,base,root):
	
	global out,write,name,fname
	global match2,valid,lock
	fname = filename
	data = open(root+'\\'+fname,'r')
	out = open(base+fname,'w') # append your output directory
	lexer.input(data.read())

	name = ""

	for tok in lexer:
		if(tok.type == 'FSTART'):
			name2 = retr(tok.value)
			#print name
			if name2 in ['if','while','for','switch','do'] or name2 in match2:
				if write and not lock:
					out.write('printk (\" File : '+fname+' ENTRY : '+name+'\");\n')
					write = 0
					
			out.write(tok.value)
			out.write('\n')
			#print "FSTART: "+tok.value
			if name2 in ['if','while','for','switch','do'] or name2 in match2:
				continue
			
			write = 1
			name = name2
			#printfile(tok)
			#out.write('printk (\" File : '+fname+' ENTRY : '+name+'\");\n')
			lock = 0
		elif tok.type == 'OTHER':
			if write and not lock:
				word = re.split('\s',tok.value)
				x = getword(word)
				#print word,x
				if (x not in match) and x.find('DEFINE')==-1 and x.find('define')==-1 :
					out.write('printk (\" File : '+fname+' ENTRY : '+name+'\");\n')
					write = 0
					#print "done"
			lock = 0
			out.write(tok.value)
		elif tok.type == 'DEF':
			out.write(tok.value)
			lock = 0
		elif tok.type == 'STRUCT':
			out.write(tok.value)
			#print tok.value
			if write:
				valid[0] = 0
				valid.append(tok)
			lock = 0	
		elif tok.type == 'COMMENT':
			out.write(tok.value)
			lock = 0
			'''
			word = re.split('\s',tok.value)
			x = getword(word)
			if write == 0 and x in ['struct']:
				print tok.value
			'''
		elif tok.type == 'SPECIAL':
			if write and not lock:
				word = re.split('\s',tok.value)
				x = getword(word)
				#print word,x
				if (x not in match) and x.find('DEFINE')==-1 and x.find('define')==-1 :
					out.write('printk (\" File : '+fname+' ENTRY : '+name+'\");\n')
					write = 0
				else:
					lock = 1
			out.write(tok.value)
	out.close()

inputd = raw_input("Input Directory: ")
outputd = raw_input("Output Directory: ")

def givename(root):
	global inputd
	#print inputd
	a = len(inputd);
	b = len(root);
	tmp =""
	for x in range(b):
		if x<=a:
			continue
		tmp = tmp + root[x]
	return tmp


debug = open('D:\\test\\debug6.txt','w')

for root, dirs, files, in os.walk(inputd):
	base = givename(root)
	for x in dirs:
		try:
			os.mkdir(outputd+base+"\\"+x)
		except:
			continue
	
	for x in files:
		#print x
		valid = []
		valid.append(1)
		ftrace(x,outputd+base+"\\",root)
		if not valid[0]:
			print "Invalid: "+x
			#print valid[1].lineno
			for y in range(len(valid)):
				if y==0:
					continue
				debug.write(" \n\n"+x+" \n\n"+ valid[y].value)