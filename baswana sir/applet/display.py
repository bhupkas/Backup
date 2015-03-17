#!/usr/bin/python

import pygame
import os
from pygame.locals import *
import sys
import eztext
import pygame

class Main1(object):

	def main(self):
		pygame.init()
		screen=pygame.display.set_mode((1200,605))
		background=pygame.Surface(screen.get_size())
		background=pygame.image.load('images/bg1.jpg')
		running=True
		f=open("output.txt","r")
		for i in range(100):
			x,y=[int(z) for z in f.readline().split()]
			pygame.draw.circle(background,(0,0,0),(x,y),5,0)	
		while running:
			screen.blit(background, (0, 0))
			pygame.display.flip()
			
			for event in pygame.event.get():
				if event.type==QUIT:
					return

if __name__=='__main__':
	pygame.init()
	temp=Main1()
	temp.main()