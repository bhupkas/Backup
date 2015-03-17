#!/bin/bash	
gnuplot generate.gnu
gsettings set org.gnome.eog.fullscreen seconds 1
eog --slide-show /home/bhupkas/Desktop/F/baswana\ sir/plotting/output
