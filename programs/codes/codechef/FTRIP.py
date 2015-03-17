def comb(a,b):
	if b<0 or a<0:
		return 0
	if b>a:	
		return 0
	if b<a-b:
		b=a-b
	if b==0:
		return 1
	re=1
	for i in range(b):
		re = (re*(a-i))/(i+1);
	return re;

t=int(raw_input())
for tc in range(t):
	a=map(int,raw_input().split())
	a[0]-=1;
	a[1]-=1;
	a[2]-=1;
	t1=float(comb(a[2],a[3]))
	t2=float(comb(a[0]-a[2],a[1]-a[3]))
	t3=float(comb(a[0],a[1]))
	ans=0;
	s=a[0]
	n=a[1]
	m=a[2]
	k=a[3]
	ans+=(t1*t2)
	for i in range(a[3]+1,a[2]+1):
		t1=float((t1*(m-i+1)))/float((i))
		if s-m-n+i == 0:
			t2=1
		else:
			t2=float(t2*(n-i+1))/float((s-m-n+i))
		ans+=((t1*t2))
	ans=float(ans)
	ans/=float(t3)
	print ("%0.6f"%ans)