import sys
import pygame
from pygame import gfxdraw

class window:
    def __init__(self) -> None:
        self.offset = (0, 0)
        self.width: int = 400
        self.height: int = 300
        self.backgroundcolor = (250, 250, 250)
        self.screen = None

    def draw_vehicles(self):
        x = 100
        y = 150
        vertices = [(-10,-5), (10, -5), (10, 5), (-10, 5)]
        vertices = [(x+v[0], y+v[1]) for v in vertices]
        vehiclecolor = (255, 0, 0)
        gfxdraw.filled_polygon(self.screen, vertices, vehiclecolor)

    def draw_roads(self):
        x= 10
        y = 400
        vertices = [(-100,-200),(100,-200),(100,200),(-100,200)]
        roadcolor = (195,179,179)
        gfxdraw.filled_polygon(self.screen,vertices,roadcolor)

    def draw_trafficlights(self):
        pass

    def draw(self):
        self.draw_vehicles()
        self.draw_roads()
        self.draw_trafficlights()
        pygame.display.update()

    def loop(self):
        self.screen = pygame.display.set_mode((self.width, self.height))
        pygame.display.update()
        pygame.display.set_caption('Traffic simulation')
        self.screen.fill(self.backgroundcolor)
        pygame.display.update()
        running = True
        while running:
            
            self.draw()
            
            for event in pygame.event.get():
                if event.type == pygame.QUIT:
                    running = False
        pygame.quit()
        sys.exit()

if __name__ == '__main__':
    w = window()
    w.loop()