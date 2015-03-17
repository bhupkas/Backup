#!usr/bin/python

def gcd(a,b):
	if a<b:
		temp=b
		b=a
		a=temp
	if a%b==0:
		return b
	return gcd(b,a%b)


a=map(int,raw_input().split())
n=int(raw_input())

temp=gcd(a[0],a[1])
while temp!=1:
	a[0]/=temp
	a[1]/=temp
	temp=gcd(a[0],a[1])

num=map(int,raw_input().split())
p=num[n-1]
q=1
for i in range(n-2,-1,-1):
	temp=p
	p=num[i]*p+q
	q=temp
	tmp=gcd(p,q)
	while tmp!=1:
		p/=tmp
		q/=tmp
		tmp=gcd(p,q)

if a[0]==p and a[1]==q:
	print "YES"
else:
	print "NO"