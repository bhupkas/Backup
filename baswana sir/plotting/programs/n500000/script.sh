#!/bin/bash	
python test1.py
gnuplot gene.gnu
gsettings set org.gnome.eog.fullscreen seconds 1
eog --slide-show /home/zer0nes/programs/n500000/ 
