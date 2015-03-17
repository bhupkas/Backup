#!/usr/bin/python

o11="./"
o1="out"
s="a"
t=".txt"
dict1 = {};
ii="img"
ee=".png"

for i in range(5):
	g=str(i+1)
	k=s+g+t
	with open(k) as f:
	    w=[int(x) for x in f.readline().split()]
	dict1[int(w[0])]=0
	f.close()

for i in range(5):
	g=str(i+1)
	k=s+g+t;
	with open(k) as f:
	    w=[int(x) for x in f.readline().split()]
	f.close()
	l=o1+g+t
	dict1[int(w[0])]=dict1[int(w[0])]+1
	f1=open(l, "w")
	for key, value in dict1.items():
		f1.write(str(key))
		f1.write(' ')
		f1.write(str(value))
		f1.write('\n')			
	f1.close()



filename=open("gene.gnu","w")
filename.write('set xrange [200000:400000]\nset yrange [0:4]\n')
for i in range(5):
	filename.write('set terminal png enhanced size 1500, 1200\n')
	g=str(i+1)
	imgname=ii+g+ee
	oname=o11+o1+g+t
	filename.write('set output ')
	filename.write("'")
	filename.write(imgname)
	filename.write("'")
	filename.write('\n')
	filename.write('plot ')
	filename.write("'")
	filename.write(oname)
	filename.write("'")
	filename.write(' using 1:2 with lines	\n')
