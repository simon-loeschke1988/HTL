# Simulieren Sie die lineare gleichförmige Bewegung einer Kugel (Kreis)
# Wenn die Kugel am Rand des Fensters anstößt, soll sie sich wie eine Billiardkugel verhalten.
# s(t) = v *t +s0
#Fenster für die Grafik zuständig


import pygame
import sys
import pygame
from underclasses import *
from pygame import gfxdraw

if __name__=='__main__':
    
    class window:
        def __init__(self,sim):
            self.sim = sim
            self.offset =(0,0)
            self.width = 300
            self.height = 400
            self.backgroundcolor =(250,250,250)
            self.screen = None
            self.frameCount =0
            
    def loop(self):

	    clock = pygame.time.Clock()

		# To draw text
	    pygame.font.init()
		s
  elf.text_font = pygame.font.SysFont('Lucida Console', 16)


		# initialize the simulation window
		self.screen = pygame.display.set_mode((self.width, self.height))
		pygame.display.update()
		pygame.display.set_caption('Simulation')
		self.screen.fill(self.backgroundcolor)
		pygame.display.update()
	
		# start the simulation
		running = True
		while running:
			
			self.draw()
			clock.tick(10)
			self.frameCount += 1

			# listen for quit event
			for event in pygame.event.get():
				if event.type == pygame.QUIT:
					running = False

		pygame.quit()
		sys.exit()
    












if __name__== "__main__":
    

