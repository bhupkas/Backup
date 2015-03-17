#!/usr/bin/python

import os

pwd="/home/bhupkas/Desktop/F/baswana\ sir/applet"

f=open("input.txt","w")
f.write('100\n')
for i in range(100):
	f.write(str(100-i))
	f.write('\n')
f.close()
os.system("g++ sorting.cpp")
os.system("./a.out<input.txt >output.txt")