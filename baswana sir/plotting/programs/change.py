#!/usr/bin/python

o11="./"
o1="n1000000/input"
s="n1000000/output"
t=".txt"
dict1 = {};
ii="img"
ee=".png"

for i in range(1000):
	g=str(i+1)
	k=o1+g+t
	with open(k) as f:
	    w=[float(x) for x in f.readline().split()]
	w[0]=float(w[0])
	dict1[(w[0])/float(1000000)]=0
	f.close()

for i in range(1000):
	g=str(i+1)
	k=o1+g+t;
	with open(k) as f:
	    w=[float(x) for x in f.readline().split()]
	w[0]=float(w[0])
	f.close()
	l=s+g+t
	dict1[(w[0])/float(1000000)]=dict1[(w[0])/float(1000000)]+1
	f1=open(l, "w")
	for key, value in dict1.items():
		f1.write(str(key))
		f1.write(' ')
		f1.write(str(value))
		f1.write('\n')			
	f1.close()
