#for i in range(1 , 11):
#	for j in range(1 , 5):
algonum = str(i)
testfile = str(j)
name = "algotest"
name = name + algonum + testfile
name += ".txt"
f = open(name,"w")
f.write(algonum)
f.write("\n")
f.write("wfr");
f.close()