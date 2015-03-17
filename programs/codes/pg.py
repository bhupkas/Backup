#!usr/bin/python
def fact(n):
	if n==1:
		return 1
	return n*fact(n-1)
def comb(a,b):
	if(b==0):
		return 1;
	if(a<b):
		return 0;
	if(a==b):
		return 1;
	return fact(a)/(fact(b)*fact(a-b));
