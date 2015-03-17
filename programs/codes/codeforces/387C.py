di = {'':0}
def fun(s):
	s = str(s)
	if s in di.keys():
		return di[s]
	n = len(s)
	i = n - 1
	num = 0
	curr = 1
	re1 = 0
	while (1):
		if(i < 0):
			break
		num = 0
		poterm = 1
		while(num < curr and i >= 0):
			num += int(s[i]) * poterm
			i -= 1
			poterm = poterm * 10
		if(num >= curr):
			re1 += 1
		curr = num	
	if (re1 == 1 and num != 0):
		di[s] = 1
		return 1

	i = n - 1
	curr = 1
	num = 0
	re = 0
	foo = False
	ye = 0
	while (1):
		if(i < 0):
			break
		num = 0
		poterm = 1
		while(num < curr and i >= 0):
			num += int(s[i]) * poterm
			i -= 1
			poterm = poterm * 10
		if(num >= curr):
			ye = fun(num)
			re += ye
			num1 = num
		if num < curr:
			foo = True
			num2 = num	
		curr = num
	if foo :
		re -= ye
		val = int(str(num) + str(num1))
		re += fun(val)
	di[s] = re
	return re
	
s1 = raw_input()
s1 = str(s1)
print fun(s1)
