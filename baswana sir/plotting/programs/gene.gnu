set xrange [0.3:1]
set yrange [0:1000]
set terminal png enhanced size 1500, 1200
set output 'images/img1.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output1.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output1.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output1.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img2.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output2.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output2.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output2.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img3.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output3.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output3.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output3.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img4.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output4.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output4.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output4.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img5.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output5.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output5.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output5.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img6.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output6.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output6.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output6.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img7.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output7.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output7.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output7.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img8.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output8.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output8.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output8.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img9.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output9.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output9.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output9.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img10.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output10.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output10.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output10.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img11.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output11.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output11.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output11.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img12.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output12.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output12.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output12.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img13.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output13.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output13.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output13.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img14.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output14.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output14.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output14.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img15.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output15.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output15.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output15.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img16.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output16.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output16.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output16.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img17.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output17.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output17.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output17.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img18.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output18.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output18.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output18.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img19.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output19.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output19.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output19.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img20.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output20.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output20.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output20.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img21.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output21.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output21.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output21.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img22.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output22.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output22.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output22.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img23.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output23.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output23.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output23.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img24.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output24.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output24.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output24.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img25.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output25.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output25.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output25.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img26.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output26.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output26.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output26.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img27.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output27.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output27.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output27.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img28.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output28.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output28.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output28.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img29.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output29.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output29.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output29.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img30.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output30.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output30.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output30.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img31.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output31.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output31.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output31.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img32.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output32.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output32.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output32.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img33.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output33.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output33.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output33.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img34.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output34.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output34.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output34.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img35.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output35.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output35.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output35.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img36.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output36.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output36.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output36.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img37.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output37.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output37.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output37.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img38.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output38.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output38.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output38.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img39.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output39.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output39.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output39.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img40.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output40.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output40.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output40.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img41.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output41.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output41.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output41.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img42.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output42.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output42.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output42.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img43.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output43.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output43.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output43.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img44.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output44.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output44.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output44.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img45.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output45.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output45.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output45.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img46.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output46.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output46.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output46.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img47.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output47.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output47.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output47.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img48.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output48.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output48.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output48.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img49.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output49.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output49.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output49.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img50.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output50.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output50.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output50.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img51.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output51.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output51.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output51.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img52.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output52.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output52.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output52.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img53.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output53.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output53.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output53.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img54.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output54.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output54.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output54.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img55.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output55.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output55.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output55.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img56.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output56.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output56.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output56.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img57.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output57.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output57.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output57.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img58.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output58.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output58.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output58.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img59.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output59.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output59.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output59.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img60.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output60.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output60.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output60.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img61.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output61.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output61.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output61.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img62.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output62.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output62.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output62.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img63.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output63.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output63.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output63.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img64.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output64.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output64.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output64.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img65.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output65.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output65.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output65.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img66.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output66.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output66.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output66.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img67.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output67.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output67.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output67.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img68.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output68.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output68.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output68.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img69.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output69.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output69.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output69.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img70.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output70.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output70.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output70.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img71.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output71.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output71.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output71.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img72.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output72.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output72.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output72.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img73.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output73.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output73.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output73.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img74.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output74.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output74.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output74.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img75.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output75.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output75.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output75.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img76.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output76.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output76.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output76.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img77.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output77.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output77.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output77.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img78.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output78.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output78.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output78.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img79.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output79.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output79.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output79.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img80.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output80.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output80.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output80.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img81.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output81.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output81.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output81.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img82.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output82.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output82.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output82.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img83.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output83.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output83.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output83.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img84.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output84.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output84.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output84.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img85.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output85.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output85.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output85.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img86.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output86.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output86.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output86.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img87.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output87.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output87.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output87.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img88.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output88.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output88.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output88.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img89.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output89.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output89.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output89.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img90.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output90.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output90.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output90.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img91.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output91.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output91.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output91.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img92.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output92.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output92.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output92.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img93.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output93.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output93.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output93.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img94.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output94.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output94.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output94.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img95.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output95.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output95.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output95.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img96.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output96.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output96.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output96.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img97.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output97.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output97.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output97.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img98.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output98.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output98.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output98.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img99.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output99.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output99.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output99.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img100.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output100.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output100.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output100.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img101.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output101.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output101.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output101.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img102.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output102.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output102.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output102.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img103.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output103.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output103.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output103.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img104.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output104.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output104.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output104.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img105.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output105.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output105.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output105.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img106.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output106.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output106.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output106.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img107.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output107.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output107.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output107.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img108.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output108.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output108.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output108.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img109.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output109.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output109.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output109.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img110.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output110.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output110.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output110.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img111.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output111.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output111.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output111.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img112.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output112.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output112.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output112.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img113.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output113.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output113.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output113.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img114.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output114.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output114.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output114.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img115.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output115.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output115.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output115.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img116.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output116.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output116.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output116.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img117.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output117.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output117.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output117.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img118.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output118.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output118.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output118.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img119.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output119.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output119.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output119.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img120.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output120.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output120.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output120.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img121.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output121.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output121.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output121.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img122.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output122.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output122.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output122.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img123.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output123.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output123.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output123.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img124.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output124.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output124.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output124.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img125.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output125.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output125.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output125.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img126.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output126.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output126.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output126.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img127.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output127.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output127.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output127.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img128.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output128.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output128.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output128.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img129.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output129.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output129.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output129.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img130.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output130.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output130.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output130.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img131.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output131.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output131.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output131.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img132.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output132.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output132.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output132.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img133.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output133.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output133.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output133.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img134.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output134.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output134.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output134.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img135.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output135.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output135.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output135.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img136.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output136.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output136.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output136.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img137.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output137.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output137.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output137.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img138.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output138.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output138.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output138.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img139.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output139.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output139.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output139.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img140.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output140.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output140.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output140.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img141.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output141.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output141.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output141.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img142.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output142.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output142.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output142.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img143.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output143.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output143.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output143.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img144.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output144.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output144.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output144.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img145.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output145.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output145.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output145.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img146.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output146.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output146.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output146.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img147.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output147.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output147.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output147.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img148.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output148.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output148.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output148.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img149.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output149.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output149.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output149.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img150.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output150.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output150.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output150.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img151.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output151.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output151.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output151.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img152.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output152.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output152.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output152.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img153.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output153.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output153.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output153.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img154.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output154.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output154.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output154.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img155.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output155.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output155.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output155.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img156.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output156.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output156.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output156.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img157.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output157.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output157.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output157.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img158.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output158.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output158.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output158.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img159.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output159.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output159.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output159.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img160.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output160.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output160.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output160.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img161.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output161.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output161.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output161.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img162.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output162.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output162.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output162.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img163.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output163.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output163.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output163.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img164.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output164.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output164.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output164.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img165.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output165.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output165.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output165.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img166.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output166.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output166.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output166.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img167.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output167.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output167.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output167.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img168.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output168.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output168.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output168.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img169.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output169.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output169.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output169.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img170.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output170.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output170.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output170.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img171.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output171.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output171.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output171.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img172.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output172.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output172.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output172.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img173.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output173.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output173.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output173.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img174.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output174.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output174.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output174.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img175.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output175.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output175.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output175.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img176.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output176.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output176.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output176.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img177.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output177.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output177.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output177.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img178.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output178.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output178.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output178.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img179.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output179.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output179.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output179.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img180.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output180.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output180.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output180.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img181.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output181.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output181.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output181.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img182.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output182.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output182.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output182.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img183.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output183.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output183.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output183.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img184.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output184.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output184.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output184.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img185.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output185.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output185.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output185.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img186.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output186.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output186.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output186.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img187.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output187.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output187.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output187.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img188.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output188.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output188.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output188.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img189.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output189.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output189.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output189.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img190.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output190.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output190.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output190.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img191.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output191.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output191.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output191.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img192.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output192.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output192.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output192.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img193.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output193.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output193.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output193.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img194.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output194.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output194.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output194.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img195.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output195.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output195.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output195.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img196.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output196.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output196.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output196.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img197.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output197.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output197.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output197.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img198.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output198.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output198.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output198.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img199.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output199.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output199.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output199.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img200.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output200.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output200.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output200.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img201.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output201.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output201.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output201.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img202.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output202.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output202.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output202.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img203.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output203.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output203.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output203.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img204.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output204.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output204.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output204.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img205.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output205.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output205.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output205.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img206.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output206.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output206.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output206.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img207.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output207.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output207.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output207.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img208.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output208.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output208.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output208.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img209.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output209.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output209.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output209.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img210.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output210.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output210.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output210.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img211.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output211.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output211.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output211.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img212.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output212.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output212.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output212.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img213.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output213.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output213.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output213.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img214.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output214.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output214.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output214.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img215.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output215.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output215.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output215.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img216.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output216.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output216.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output216.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img217.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output217.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output217.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output217.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img218.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output218.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output218.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output218.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img219.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output219.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output219.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output219.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img220.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output220.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output220.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output220.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img221.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output221.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output221.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output221.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img222.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output222.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output222.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output222.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img223.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output223.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output223.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output223.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img224.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output224.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output224.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output224.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img225.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output225.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output225.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output225.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img226.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output226.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output226.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output226.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img227.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output227.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output227.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output227.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img228.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output228.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output228.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output228.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img229.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output229.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output229.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output229.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img230.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output230.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output230.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output230.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img231.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output231.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output231.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output231.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img232.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output232.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output232.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output232.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img233.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output233.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output233.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output233.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img234.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output234.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output234.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output234.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img235.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output235.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output235.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output235.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img236.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output236.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output236.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output236.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img237.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output237.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output237.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output237.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img238.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output238.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output238.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output238.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img239.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output239.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output239.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output239.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img240.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output240.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output240.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output240.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img241.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output241.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output241.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output241.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img242.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output242.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output242.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output242.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img243.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output243.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output243.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output243.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img244.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output244.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output244.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output244.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img245.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output245.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output245.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output245.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img246.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output246.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output246.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output246.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img247.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output247.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output247.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output247.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img248.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output248.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output248.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output248.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img249.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output249.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output249.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output249.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img250.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output250.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output250.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output250.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img251.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output251.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output251.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output251.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img252.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output252.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output252.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output252.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img253.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output253.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output253.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output253.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img254.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output254.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output254.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output254.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img255.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output255.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output255.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output255.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img256.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output256.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output256.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output256.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img257.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output257.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output257.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output257.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img258.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output258.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output258.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output258.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img259.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output259.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output259.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output259.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img260.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output260.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output260.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output260.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img261.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output261.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output261.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output261.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img262.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output262.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output262.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output262.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img263.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output263.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output263.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output263.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img264.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output264.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output264.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output264.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img265.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output265.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output265.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output265.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img266.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output266.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output266.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output266.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img267.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output267.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output267.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output267.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img268.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output268.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output268.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output268.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img269.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output269.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output269.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output269.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img270.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output270.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output270.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output270.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img271.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output271.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output271.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output271.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img272.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output272.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output272.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output272.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img273.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output273.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output273.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output273.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img274.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output274.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output274.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output274.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img275.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output275.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output275.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output275.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img276.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output276.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output276.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output276.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img277.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output277.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output277.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output277.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img278.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output278.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output278.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output278.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img279.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output279.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output279.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output279.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img280.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output280.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output280.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output280.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img281.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output281.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output281.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output281.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img282.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output282.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output282.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output282.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img283.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output283.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output283.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output283.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img284.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output284.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output284.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output284.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img285.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output285.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output285.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output285.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img286.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output286.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output286.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output286.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img287.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output287.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output287.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output287.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img288.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output288.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output288.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output288.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img289.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output289.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output289.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output289.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img290.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output290.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output290.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output290.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img291.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output291.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output291.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output291.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img292.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output292.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output292.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output292.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img293.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output293.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output293.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output293.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img294.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output294.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output294.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output294.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img295.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output295.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output295.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output295.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img296.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output296.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output296.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output296.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img297.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output297.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output297.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output297.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img298.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output298.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output298.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output298.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img299.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output299.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output299.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output299.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img300.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output300.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output300.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output300.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img301.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output301.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output301.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output301.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img302.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output302.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output302.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output302.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img303.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output303.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output303.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output303.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img304.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output304.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output304.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output304.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img305.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output305.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output305.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output305.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img306.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output306.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output306.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output306.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img307.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output307.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output307.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output307.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img308.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output308.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output308.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output308.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img309.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output309.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output309.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output309.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img310.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output310.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output310.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output310.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img311.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output311.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output311.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output311.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img312.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output312.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output312.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output312.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img313.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output313.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output313.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output313.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img314.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output314.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output314.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output314.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img315.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output315.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output315.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output315.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img316.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output316.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output316.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output316.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img317.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output317.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output317.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output317.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img318.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output318.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output318.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output318.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img319.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output319.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output319.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output319.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img320.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output320.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output320.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output320.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img321.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output321.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output321.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output321.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img322.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output322.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output322.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output322.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img323.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output323.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output323.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output323.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img324.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output324.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output324.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output324.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img325.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output325.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output325.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output325.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img326.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output326.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output326.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output326.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img327.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output327.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output327.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output327.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img328.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output328.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output328.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output328.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img329.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output329.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output329.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output329.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img330.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output330.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output330.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output330.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img331.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output331.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output331.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output331.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img332.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output332.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output332.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output332.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img333.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output333.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output333.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output333.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img334.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output334.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output334.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output334.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img335.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output335.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output335.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output335.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img336.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output336.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output336.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output336.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img337.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output337.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output337.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output337.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img338.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output338.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output338.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output338.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img339.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output339.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output339.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output339.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img340.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output340.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output340.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output340.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img341.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output341.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output341.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output341.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img342.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output342.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output342.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output342.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img343.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output343.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output343.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output343.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img344.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output344.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output344.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output344.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img345.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output345.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output345.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output345.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img346.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output346.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output346.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output346.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img347.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output347.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output347.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output347.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img348.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output348.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output348.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output348.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img349.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output349.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output349.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output349.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img350.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output350.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output350.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output350.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img351.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output351.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output351.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output351.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img352.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output352.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output352.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output352.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img353.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output353.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output353.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output353.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img354.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output354.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output354.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output354.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img355.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output355.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output355.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output355.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img356.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output356.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output356.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output356.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img357.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output357.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output357.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output357.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img358.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output358.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output358.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output358.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img359.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output359.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output359.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output359.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img360.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output360.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output360.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output360.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img361.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output361.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output361.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output361.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img362.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output362.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output362.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output362.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img363.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output363.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output363.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output363.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img364.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output364.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output364.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output364.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img365.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output365.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output365.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output365.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img366.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output366.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output366.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output366.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img367.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output367.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output367.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output367.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img368.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output368.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output368.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output368.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img369.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output369.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output369.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output369.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img370.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output370.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output370.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output370.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img371.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output371.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output371.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output371.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img372.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output372.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output372.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output372.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img373.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output373.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output373.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output373.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img374.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output374.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output374.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output374.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img375.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output375.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output375.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output375.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img376.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output376.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output376.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output376.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img377.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output377.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output377.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output377.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img378.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output378.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output378.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output378.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img379.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output379.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output379.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output379.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img380.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output380.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output380.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output380.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img381.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output381.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output381.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output381.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img382.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output382.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output382.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output382.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img383.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output383.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output383.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output383.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img384.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output384.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output384.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output384.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img385.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output385.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output385.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output385.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img386.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output386.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output386.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output386.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img387.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output387.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output387.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output387.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img388.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output388.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output388.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output388.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img389.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output389.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output389.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output389.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img390.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output390.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output390.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output390.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img391.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output391.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output391.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output391.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img392.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output392.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output392.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output392.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img393.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output393.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output393.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output393.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img394.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output394.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output394.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output394.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img395.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output395.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output395.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output395.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img396.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output396.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output396.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output396.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img397.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output397.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output397.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output397.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img398.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output398.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output398.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output398.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img399.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output399.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output399.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output399.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img400.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output400.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output400.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output400.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img401.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output401.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output401.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output401.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img402.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output402.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output402.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output402.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img403.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output403.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output403.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output403.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img404.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output404.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output404.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output404.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img405.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output405.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output405.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output405.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img406.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output406.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output406.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output406.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img407.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output407.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output407.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output407.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img408.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output408.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output408.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output408.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img409.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output409.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output409.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output409.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img410.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output410.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output410.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output410.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img411.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output411.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output411.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output411.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img412.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output412.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output412.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output412.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img413.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output413.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output413.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output413.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img414.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output414.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output414.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output414.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img415.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output415.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output415.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output415.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img416.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output416.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output416.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output416.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img417.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output417.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output417.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output417.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img418.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output418.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output418.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output418.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img419.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output419.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output419.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output419.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img420.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output420.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output420.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output420.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img421.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output421.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output421.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output421.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img422.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output422.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output422.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output422.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img423.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output423.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output423.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output423.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img424.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output424.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output424.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output424.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img425.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output425.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output425.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output425.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img426.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output426.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output426.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output426.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img427.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output427.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output427.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output427.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img428.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output428.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output428.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output428.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img429.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output429.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output429.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output429.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img430.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output430.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output430.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output430.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img431.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output431.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output431.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output431.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img432.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output432.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output432.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output432.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img433.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output433.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output433.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output433.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img434.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output434.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output434.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output434.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img435.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output435.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output435.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output435.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img436.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output436.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output436.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output436.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img437.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output437.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output437.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output437.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img438.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output438.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output438.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output438.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img439.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output439.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output439.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output439.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img440.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output440.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output440.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output440.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img441.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output441.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output441.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output441.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img442.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output442.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output442.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output442.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img443.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output443.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output443.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output443.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img444.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output444.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output444.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output444.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img445.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output445.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output445.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output445.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img446.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output446.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output446.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output446.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img447.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output447.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output447.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output447.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img448.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output448.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output448.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output448.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img449.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output449.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output449.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output449.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img450.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output450.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output450.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output450.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img451.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output451.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output451.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output451.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img452.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output452.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output452.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output452.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img453.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output453.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output453.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output453.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img454.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output454.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output454.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output454.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img455.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output455.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output455.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output455.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img456.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output456.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output456.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output456.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img457.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output457.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output457.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output457.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img458.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output458.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output458.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output458.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img459.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output459.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output459.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output459.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img460.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output460.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output460.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output460.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img461.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output461.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output461.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output461.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img462.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output462.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output462.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output462.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img463.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output463.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output463.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output463.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img464.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output464.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output464.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output464.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img465.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output465.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output465.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output465.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img466.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output466.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output466.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output466.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img467.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output467.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output467.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output467.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img468.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output468.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output468.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output468.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img469.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output469.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output469.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output469.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img470.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output470.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output470.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output470.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img471.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output471.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output471.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output471.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img472.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output472.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output472.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output472.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img473.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output473.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output473.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output473.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img474.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output474.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output474.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output474.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img475.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output475.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output475.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output475.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img476.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output476.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output476.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output476.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img477.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output477.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output477.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output477.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img478.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output478.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output478.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output478.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img479.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output479.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output479.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output479.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img480.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output480.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output480.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output480.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img481.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output481.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output481.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output481.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img482.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output482.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output482.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output482.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img483.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output483.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output483.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output483.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img484.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output484.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output484.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output484.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img485.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output485.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output485.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output485.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img486.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output486.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output486.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output486.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img487.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output487.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output487.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output487.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img488.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output488.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output488.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output488.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img489.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output489.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output489.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output489.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img490.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output490.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output490.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output490.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img491.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output491.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output491.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output491.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img492.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output492.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output492.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output492.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img493.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output493.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output493.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output493.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img494.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output494.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output494.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output494.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img495.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output495.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output495.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output495.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img496.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output496.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output496.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output496.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img497.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output497.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output497.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output497.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img498.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output498.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output498.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output498.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img499.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output499.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output499.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output499.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img500.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output500.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output500.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output500.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img501.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output501.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output501.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output501.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img502.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output502.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output502.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output502.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img503.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output503.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output503.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output503.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img504.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output504.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output504.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output504.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img505.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output505.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output505.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output505.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img506.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output506.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output506.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output506.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img507.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output507.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output507.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output507.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img508.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output508.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output508.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output508.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img509.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output509.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output509.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output509.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img510.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output510.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output510.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output510.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img511.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output511.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output511.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output511.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img512.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output512.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output512.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output512.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img513.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output513.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output513.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output513.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img514.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output514.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output514.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output514.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img515.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output515.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output515.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output515.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img516.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output516.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output516.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output516.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img517.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output517.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output517.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output517.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img518.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output518.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output518.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output518.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img519.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output519.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output519.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output519.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img520.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output520.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output520.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output520.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img521.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output521.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output521.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output521.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img522.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output522.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output522.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output522.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img523.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output523.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output523.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output523.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img524.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output524.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output524.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output524.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img525.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output525.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output525.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output525.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img526.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output526.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output526.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output526.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img527.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output527.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output527.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output527.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img528.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output528.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output528.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output528.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img529.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output529.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output529.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output529.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img530.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output530.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output530.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output530.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img531.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output531.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output531.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output531.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img532.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output532.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output532.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output532.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img533.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output533.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output533.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output533.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img534.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output534.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output534.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output534.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img535.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output535.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output535.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output535.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img536.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output536.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output536.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output536.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img537.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output537.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output537.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output537.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img538.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output538.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output538.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output538.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img539.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output539.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output539.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output539.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img540.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output540.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output540.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output540.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img541.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output541.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output541.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output541.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img542.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output542.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output542.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output542.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img543.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output543.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output543.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output543.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img544.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output544.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output544.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output544.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img545.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output545.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output545.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output545.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img546.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output546.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output546.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output546.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img547.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output547.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output547.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output547.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img548.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output548.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output548.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output548.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img549.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output549.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output549.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output549.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img550.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output550.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output550.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output550.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img551.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output551.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output551.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output551.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img552.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output552.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output552.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output552.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img553.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output553.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output553.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output553.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img554.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output554.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output554.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output554.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img555.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output555.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output555.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output555.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img556.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output556.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output556.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output556.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img557.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output557.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output557.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output557.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img558.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output558.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output558.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output558.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img559.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output559.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output559.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output559.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img560.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output560.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output560.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output560.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img561.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output561.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output561.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output561.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img562.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output562.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output562.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output562.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img563.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output563.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output563.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output563.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img564.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output564.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output564.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output564.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img565.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output565.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output565.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output565.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img566.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output566.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output566.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output566.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img567.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output567.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output567.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output567.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img568.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output568.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output568.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output568.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img569.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output569.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output569.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output569.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img570.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output570.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output570.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output570.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img571.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output571.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output571.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output571.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img572.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output572.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output572.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output572.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img573.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output573.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output573.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output573.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img574.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output574.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output574.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output574.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img575.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output575.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output575.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output575.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img576.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output576.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output576.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output576.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img577.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output577.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output577.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output577.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img578.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output578.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output578.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output578.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img579.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output579.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output579.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output579.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img580.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output580.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output580.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output580.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img581.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output581.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output581.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output581.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img582.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output582.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output582.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output582.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img583.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output583.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output583.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output583.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img584.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output584.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output584.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output584.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img585.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output585.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output585.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output585.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img586.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output586.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output586.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output586.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img587.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output587.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output587.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output587.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img588.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output588.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output588.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output588.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img589.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output589.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output589.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output589.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img590.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output590.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output590.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output590.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img591.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output591.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output591.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output591.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img592.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output592.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output592.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output592.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img593.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output593.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output593.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output593.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img594.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output594.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output594.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output594.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img595.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output595.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output595.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output595.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img596.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output596.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output596.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output596.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img597.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output597.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output597.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output597.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img598.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output598.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output598.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output598.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img599.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output599.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output599.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output599.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img600.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output600.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output600.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output600.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img601.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output601.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output601.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output601.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img602.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output602.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output602.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output602.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img603.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output603.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output603.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output603.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img604.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output604.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output604.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output604.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img605.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output605.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output605.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output605.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img606.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output606.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output606.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output606.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img607.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output607.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output607.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output607.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img608.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output608.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output608.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output608.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img609.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output609.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output609.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output609.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img610.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output610.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output610.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output610.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img611.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output611.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output611.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output611.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img612.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output612.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output612.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output612.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img613.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output613.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output613.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output613.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img614.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output614.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output614.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output614.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img615.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output615.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output615.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output615.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img616.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output616.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output616.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output616.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img617.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output617.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output617.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output617.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img618.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output618.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output618.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output618.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img619.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output619.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output619.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output619.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img620.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output620.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output620.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output620.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img621.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output621.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output621.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output621.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img622.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output622.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output622.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output622.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img623.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output623.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output623.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output623.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img624.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output624.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output624.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output624.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img625.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output625.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output625.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output625.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img626.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output626.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output626.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output626.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img627.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output627.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output627.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output627.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img628.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output628.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output628.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output628.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img629.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output629.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output629.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output629.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img630.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output630.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output630.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output630.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img631.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output631.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output631.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output631.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img632.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output632.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output632.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output632.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img633.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output633.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output633.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output633.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img634.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output634.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output634.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output634.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img635.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output635.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output635.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output635.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img636.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output636.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output636.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output636.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img637.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output637.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output637.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output637.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img638.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output638.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output638.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output638.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img639.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output639.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output639.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output639.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img640.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output640.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output640.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output640.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img641.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output641.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output641.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output641.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img642.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output642.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output642.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output642.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img643.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output643.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output643.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output643.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img644.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output644.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output644.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output644.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img645.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output645.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output645.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output645.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img646.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output646.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output646.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output646.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img647.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output647.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output647.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output647.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img648.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output648.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output648.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output648.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img649.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output649.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output649.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output649.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img650.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output650.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output650.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output650.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img651.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output651.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output651.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output651.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img652.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output652.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output652.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output652.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img653.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output653.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output653.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output653.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img654.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output654.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output654.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output654.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img655.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output655.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output655.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output655.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img656.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output656.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output656.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output656.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img657.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output657.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output657.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output657.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img658.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output658.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output658.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output658.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img659.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output659.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output659.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output659.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img660.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output660.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output660.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output660.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img661.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output661.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output661.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output661.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img662.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output662.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output662.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output662.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img663.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output663.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output663.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output663.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img664.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output664.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output664.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output664.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img665.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output665.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output665.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output665.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img666.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output666.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output666.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output666.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img667.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output667.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output667.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output667.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img668.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output668.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output668.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output668.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img669.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output669.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output669.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output669.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img670.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output670.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output670.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output670.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img671.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output671.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output671.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output671.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img672.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output672.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output672.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output672.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img673.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output673.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output673.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output673.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img674.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output674.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output674.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output674.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img675.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output675.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output675.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output675.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img676.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output676.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output676.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output676.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img677.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output677.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output677.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output677.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img678.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output678.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output678.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output678.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img679.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output679.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output679.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output679.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img680.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output680.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output680.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output680.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img681.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output681.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output681.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output681.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img682.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output682.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output682.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output682.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img683.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output683.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output683.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output683.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img684.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output684.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output684.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output684.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img685.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output685.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output685.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output685.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img686.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output686.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output686.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output686.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img687.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output687.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output687.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output687.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img688.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output688.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output688.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output688.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img689.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output689.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output689.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output689.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img690.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output690.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output690.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output690.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img691.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output691.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output691.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output691.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img692.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output692.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output692.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output692.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img693.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output693.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output693.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output693.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img694.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output694.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output694.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output694.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img695.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output695.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output695.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output695.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img696.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output696.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output696.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output696.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img697.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output697.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output697.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output697.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img698.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output698.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output698.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output698.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img699.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output699.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output699.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output699.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img700.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output700.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output700.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output700.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img701.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output701.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output701.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output701.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img702.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output702.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output702.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output702.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img703.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output703.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output703.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output703.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img704.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output704.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output704.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output704.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img705.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output705.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output705.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output705.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img706.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output706.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output706.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output706.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img707.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output707.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output707.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output707.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img708.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output708.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output708.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output708.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img709.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output709.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output709.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output709.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img710.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output710.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output710.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output710.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img711.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output711.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output711.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output711.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img712.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output712.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output712.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output712.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img713.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output713.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output713.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output713.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img714.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output714.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output714.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output714.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img715.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output715.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output715.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output715.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img716.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output716.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output716.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output716.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img717.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output717.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output717.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output717.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img718.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output718.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output718.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output718.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img719.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output719.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output719.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output719.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img720.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output720.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output720.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output720.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img721.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output721.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output721.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output721.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img722.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output722.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output722.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output722.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img723.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output723.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output723.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output723.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img724.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output724.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output724.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output724.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img725.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output725.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output725.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output725.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img726.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output726.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output726.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output726.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img727.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output727.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output727.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output727.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img728.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output728.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output728.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output728.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img729.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output729.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output729.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output729.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img730.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output730.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output730.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output730.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img731.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output731.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output731.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output731.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img732.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output732.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output732.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output732.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img733.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output733.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output733.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output733.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img734.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output734.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output734.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output734.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img735.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output735.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output735.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output735.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img736.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output736.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output736.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output736.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img737.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output737.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output737.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output737.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img738.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output738.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output738.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output738.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img739.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output739.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output739.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output739.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img740.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output740.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output740.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output740.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img741.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output741.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output741.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output741.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img742.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output742.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output742.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output742.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img743.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output743.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output743.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output743.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img744.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output744.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output744.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output744.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img745.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output745.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output745.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output745.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img746.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output746.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output746.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output746.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img747.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output747.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output747.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output747.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img748.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output748.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output748.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output748.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img749.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output749.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output749.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output749.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img750.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output750.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output750.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output750.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img751.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output751.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output751.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output751.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img752.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output752.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output752.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output752.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img753.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output753.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output753.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output753.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img754.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output754.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output754.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output754.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img755.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output755.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output755.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output755.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img756.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output756.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output756.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output756.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img757.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output757.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output757.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output757.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img758.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output758.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output758.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output758.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img759.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output759.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output759.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output759.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img760.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output760.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output760.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output760.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img761.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output761.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output761.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output761.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img762.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output762.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output762.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output762.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img763.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output763.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output763.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output763.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img764.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output764.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output764.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output764.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img765.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output765.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output765.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output765.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img766.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output766.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output766.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output766.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img767.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output767.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output767.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output767.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img768.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output768.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output768.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output768.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img769.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output769.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output769.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output769.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img770.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output770.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output770.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output770.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img771.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output771.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output771.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output771.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img772.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output772.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output772.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output772.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img773.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output773.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output773.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output773.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img774.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output774.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output774.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output774.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img775.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output775.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output775.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output775.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img776.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output776.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output776.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output776.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img777.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output777.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output777.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output777.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img778.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output778.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output778.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output778.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img779.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output779.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output779.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output779.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img780.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output780.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output780.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output780.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img781.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output781.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output781.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output781.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img782.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output782.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output782.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output782.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img783.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output783.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output783.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output783.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img784.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output784.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output784.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output784.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img785.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output785.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output785.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output785.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img786.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output786.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output786.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output786.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img787.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output787.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output787.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output787.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img788.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output788.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output788.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output788.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img789.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output789.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output789.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output789.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img790.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output790.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output790.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output790.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img791.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output791.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output791.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output791.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img792.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output792.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output792.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output792.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img793.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output793.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output793.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output793.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img794.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output794.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output794.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output794.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img795.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output795.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output795.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output795.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img796.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output796.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output796.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output796.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img797.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output797.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output797.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output797.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img798.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output798.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output798.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output798.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img799.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output799.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output799.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output799.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img800.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output800.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output800.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output800.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img801.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output801.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output801.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output801.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img802.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output802.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output802.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output802.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img803.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output803.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output803.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output803.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img804.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output804.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output804.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output804.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img805.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output805.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output805.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output805.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img806.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output806.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output806.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output806.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img807.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output807.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output807.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output807.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img808.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output808.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output808.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output808.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img809.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output809.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output809.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output809.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img810.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output810.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output810.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output810.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img811.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output811.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output811.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output811.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img812.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output812.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output812.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output812.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img813.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output813.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output813.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output813.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img814.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output814.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output814.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output814.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img815.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output815.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output815.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output815.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img816.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output816.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output816.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output816.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img817.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output817.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output817.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output817.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img818.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output818.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output818.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output818.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img819.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output819.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output819.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output819.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img820.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output820.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output820.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output820.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img821.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output821.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output821.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output821.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img822.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output822.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output822.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output822.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img823.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output823.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output823.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output823.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img824.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output824.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output824.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output824.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img825.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output825.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output825.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output825.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img826.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output826.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output826.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output826.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img827.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output827.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output827.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output827.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img828.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output828.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output828.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output828.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img829.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output829.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output829.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output829.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img830.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output830.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output830.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output830.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img831.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output831.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output831.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output831.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img832.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output832.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output832.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output832.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img833.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output833.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output833.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output833.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img834.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output834.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output834.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output834.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img835.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output835.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output835.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output835.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img836.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output836.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output836.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output836.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img837.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output837.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output837.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output837.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img838.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output838.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output838.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output838.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img839.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output839.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output839.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output839.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img840.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output840.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output840.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output840.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img841.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output841.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output841.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output841.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img842.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output842.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output842.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output842.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img843.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output843.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output843.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output843.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img844.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output844.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output844.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output844.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img845.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output845.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output845.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output845.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img846.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output846.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output846.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output846.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img847.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output847.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output847.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output847.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img848.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output848.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output848.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output848.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img849.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output849.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output849.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output849.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img850.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output850.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output850.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output850.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img851.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output851.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output851.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output851.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img852.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output852.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output852.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output852.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img853.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output853.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output853.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output853.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img854.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output854.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output854.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output854.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img855.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output855.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output855.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output855.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img856.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output856.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output856.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output856.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img857.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output857.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output857.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output857.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img858.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output858.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output858.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output858.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img859.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output859.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output859.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output859.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img860.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output860.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output860.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output860.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img861.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output861.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output861.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output861.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img862.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output862.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output862.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output862.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img863.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output863.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output863.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output863.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img864.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output864.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output864.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output864.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img865.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output865.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output865.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output865.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img866.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output866.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output866.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output866.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img867.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output867.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output867.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output867.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img868.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output868.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output868.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output868.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img869.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output869.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output869.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output869.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img870.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output870.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output870.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output870.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img871.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output871.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output871.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output871.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img872.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output872.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output872.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output872.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img873.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output873.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output873.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output873.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img874.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output874.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output874.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output874.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img875.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output875.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output875.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output875.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img876.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output876.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output876.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output876.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img877.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output877.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output877.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output877.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img878.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output878.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output878.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output878.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img879.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output879.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output879.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output879.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img880.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output880.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output880.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output880.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img881.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output881.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output881.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output881.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img882.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output882.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output882.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output882.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img883.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output883.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output883.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output883.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img884.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output884.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output884.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output884.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img885.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output885.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output885.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output885.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img886.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output886.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output886.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output886.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img887.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output887.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output887.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output887.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img888.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output888.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output888.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output888.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img889.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output889.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output889.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output889.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img890.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output890.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output890.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output890.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img891.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output891.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output891.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output891.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img892.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output892.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output892.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output892.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img893.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output893.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output893.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output893.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img894.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output894.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output894.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output894.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img895.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output895.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output895.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output895.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img896.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output896.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output896.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output896.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img897.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output897.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output897.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output897.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img898.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output898.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output898.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output898.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img899.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output899.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output899.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output899.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img900.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output900.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output900.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output900.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img901.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output901.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output901.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output901.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img902.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output902.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output902.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output902.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img903.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output903.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output903.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output903.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img904.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output904.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output904.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output904.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img905.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output905.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output905.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output905.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img906.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output906.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output906.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output906.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img907.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output907.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output907.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output907.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img908.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output908.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output908.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output908.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img909.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output909.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output909.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output909.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img910.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output910.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output910.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output910.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img911.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output911.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output911.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output911.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img912.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output912.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output912.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output912.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img913.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output913.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output913.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output913.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img914.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output914.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output914.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output914.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img915.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output915.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output915.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output915.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img916.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output916.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output916.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output916.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img917.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output917.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output917.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output917.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img918.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output918.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output918.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output918.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img919.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output919.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output919.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output919.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img920.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output920.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output920.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output920.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img921.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output921.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output921.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output921.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img922.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output922.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output922.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output922.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img923.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output923.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output923.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output923.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img924.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output924.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output924.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output924.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img925.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output925.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output925.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output925.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img926.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output926.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output926.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output926.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img927.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output927.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output927.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output927.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img928.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output928.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output928.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output928.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img929.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output929.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output929.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output929.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img930.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output930.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output930.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output930.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img931.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output931.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output931.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output931.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img932.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output932.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output932.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output932.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img933.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output933.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output933.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output933.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img934.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output934.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output934.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output934.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img935.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output935.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output935.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output935.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img936.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output936.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output936.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output936.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img937.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output937.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output937.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output937.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img938.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output938.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output938.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output938.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img939.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output939.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output939.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output939.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img940.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output940.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output940.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output940.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img941.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output941.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output941.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output941.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img942.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output942.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output942.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output942.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img943.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output943.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output943.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output943.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img944.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output944.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output944.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output944.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img945.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output945.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output945.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output945.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img946.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output946.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output946.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output946.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img947.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output947.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output947.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output947.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img948.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output948.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output948.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output948.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img949.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output949.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output949.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output949.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img950.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output950.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output950.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output950.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img951.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output951.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output951.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output951.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img952.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output952.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output952.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output952.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img953.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output953.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output953.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output953.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img954.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output954.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output954.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output954.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img955.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output955.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output955.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output955.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img956.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output956.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output956.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output956.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img957.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output957.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output957.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output957.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img958.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output958.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output958.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output958.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img959.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output959.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output959.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output959.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img960.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output960.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output960.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output960.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img961.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output961.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output961.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output961.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img962.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output962.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output962.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output962.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img963.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output963.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output963.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output963.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img964.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output964.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output964.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output964.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img965.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output965.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output965.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output965.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img966.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output966.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output966.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output966.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img967.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output967.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output967.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output967.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img968.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output968.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output968.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output968.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img969.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output969.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output969.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output969.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img970.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output970.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output970.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output970.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img971.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output971.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output971.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output971.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img972.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output972.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output972.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output972.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img973.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output973.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output973.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output973.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img974.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output974.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output974.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output974.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img975.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output975.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output975.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output975.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img976.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output976.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output976.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output976.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img977.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output977.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output977.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output977.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img978.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output978.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output978.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output978.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img979.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output979.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output979.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output979.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img980.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output980.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output980.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output980.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img981.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output981.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output981.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output981.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img982.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output982.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output982.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output982.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img983.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output983.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output983.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output983.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img984.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output984.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output984.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output984.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img985.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output985.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output985.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output985.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img986.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output986.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output986.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output986.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img987.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output987.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output987.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output987.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img988.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output988.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output988.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output988.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img989.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output989.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output989.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output989.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img990.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output990.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output990.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output990.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img991.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output991.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output991.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output991.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img992.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output992.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output992.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output992.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img993.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output993.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output993.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output993.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img994.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output994.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output994.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output994.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img995.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output995.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output995.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output995.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img996.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output996.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output996.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output996.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img997.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output997.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output997.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output997.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img998.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output998.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output998.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output998.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img999.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output999.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output999.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output999.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
set terminal png enhanced size 1500, 1200
set output 'images/img1000.png'
set multiplot
set style line 1 lt 1 lw 3 pt 3 linecolor rgb 'red'
set style line 2 lt 1 lw 3 pt 3 linecolor rgb 'blue'
set style line 3 lt 1 lw 3 pt 3 linecolor rgb 'green' 
set key right top
set title 'Time complexity'
set xlabel 'input'
set ylabel 'Frequency'
plot 'n100000/./output1000.txt' using 1:2:(1.0) smooth unique  w l ls 1 title 'n=100000'
set key right bottom
plot 'n500000/./output1000.txt' using 1:2:(1.0) smooth unique  w l ls 2 title 'n=500000'
set key left top
plot 'n1000000/./output1000.txt' using 1:2:(1.0) smooth unique  w l ls 3 title 'n=1000000'
unset multiplot
