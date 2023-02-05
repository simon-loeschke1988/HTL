import sys
import pygame
from .simulation import simulation
from .sphere import sphere

class window:

	def __init__(self, sim:simulation, width:int = 400, height:int = 400) -> None:
		'''
		Constructor
		'''
		self.__sim:simulation = sim
		self.__width:int = width
		self.__height:int = height

	@property
	def width(self) -> int:
		'''
		Getter method for the width of the window
		'''
		return self.__width

	@width.setter
	def width(self, width:int) -> None:
		'''
		Setter method for the width of the window
		'''
		self.__width = width

	@property
	def height(self) -> int:
		'''
		Getter method for the height of the window
		'''
		return self.__height

	@height.setter
	def height(self, height:int) -> None:
		'''
		Setter method for the height of the window
		'''
		self.__height = height

	def draw(self):
		s:sphere
		#print(self.__sim.__spheres)
		#for s in self.__sim.__spheres:
		#	print(s.x, s.y, s.r)

	def loop(self):		
		'''
		Simulation loop, updates the screen
		'''
		self.screen = pygame.display.set_mode((self.width, self.height))		
		pygame.display.update()
		
		run = True
		while run:

			self.draw()
			pygame.display.update()

			for event in pygame.event.get():
				if event.type == pygame.QUIT:
					run = False

		pygame.quit()
		sys.exit()
