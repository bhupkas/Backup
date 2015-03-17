set xrange [200000:400000]
set yrange [0:4]
set terminal png enhanced size 1500, 1200
set output 'img1.png'
plot './out1.txt' using 1:2 with lines	
set terminal png enhanced size 1500, 1200
set output 'img2.png'
plot './out2.txt' using 1:2 with lines	
set terminal png enhanced size 1500, 1200
set output 'img3.png'
plot './out3.txt' using 1:2 with lines	
set terminal png enhanced size 1500, 1200
set output 'img4.png'
plot './out4.txt' using 1:2 with lines	
set terminal png enhanced size 1500, 1200
set output 'img5.png'
plot './out5.txt' using 1:2 with lines	
