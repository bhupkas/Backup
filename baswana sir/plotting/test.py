#!/usr/bin/python

o1="out"
s="a"
t=".txt"
dict1 = {};
for i in range(5):
	g=str(i+1)
	k=s+g+t
	with open(k) as f:
	    w=[int(x) for x in f.readline().split()]
	dict1[int(w[0])]=0
	f.close()
for key, value in dict1.items():
    print "key is", key, "value is", value
for i in range(5):
	g=str(i+1)
	k=s+g+t;
	with open(k) as f:
	    w=[int(x) for x in f.readline().split()]
	f.close()
	l=o1+g+t
	dict1[int(w[0])]=dict1[int(w[0])]+1
	f1=open(l, "a")
	for key, value in dict1.items():
		f1.write(str(key))
		f1.write(' ')
		f1.write(str(value))
		f1.write('\n')			
for key, value in dict1.items():
    print "key is", key, "value is", value

	