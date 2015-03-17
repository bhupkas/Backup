t=int(raw_input())
l=0
while t>0:
	t=t-1
	n=int(raw_input())
	count=0
	while n!=1 :
			if count>36524:
				l=1
				break
			if n==1 :
				break
			elif n%2==0 :
				n=n/2
				count=count+1
			else:
				n= 3*n +3
				count=count + 1
	if l==1:
		print "Yes"
		continue
	check=36524
	if n<check:
		print "No"
	else:
		print "Yes"