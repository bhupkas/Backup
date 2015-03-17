a=map(int,raw_input().split())
x=a[0]
y=a[1]
m=a[2]
if(x>y):
	(x,y)=(y,x)
ans=0
if y<m and x+y<=x: 
	print -1

else:
	if y>=m:
		print 0
	else:
		if x+y<0:
			ans=-1*(x/y)
			x+=ans*y
		if x>y:
			(x,y)=(y,x)
		M=y
		while(M<m):
			M=x+y;
			ans+=1;
			x=M;
			if(x>y):
				(x,y)=(y,x);
			M=y;
		print ans
