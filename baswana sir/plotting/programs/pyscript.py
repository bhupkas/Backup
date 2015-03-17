ee='.png'
ii='images/img'
o11='./output'
t='.txt'
filename=open("gene.gnu","w")
filename.write('set xrange [0.3:1]\nset yrange [0:1000]\n')
for i in range(1000):
	filename.write('set terminal png enhanced size 1500, 1200\n')
	g=str(i+1)
	imgname=ii+g+ee
	oname=o11+g+t
	filename.write('set output ')
	filename.write("'")
	filename.write(imgname)
	filename.write("'")
	filename.write('\n')
	filename.write("set multiplot\nset style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'\nset style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'\n")
	filename.write("set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' \n")
	filename.write("set key right top\nset title 'Time complexity'\nset xlabel 'input'\nset ylabel 'Frequency'\n")
	filename.write('plot ')
	filename.write("'n100000/")
	filename.write(oname)
	filename.write("'")
	filename.write(" using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'\n")
	filename.write("set key right bottom\n")
	filename.write('plot ')
	filename.write("'n500000/")
	filename.write(oname)
	filename.write("'")
	filename.write(" using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'\n")
	filename.write("set key left top\n")	
	filename.write('plot ')
	filename.write("'n1000000/")
	filename.write(oname)
	filename.write("'")
	filename.write(" using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'\n")
	filename.write("unset multiplot\n")
