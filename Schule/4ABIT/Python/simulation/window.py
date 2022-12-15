import pygame as pg 
from pygame import gfxdraw
import sys

# Fenster erzeugen

class window:
    def __init__(self):
        self.offset = (0,0)
        self.width = 400
        self.height = 300
        self.backgroundcolor = (250,250,250)
        self.screen = None
    def loop(self):
        self.screen = pg.display.set_mode((self.width,self.height))
        pg.display.update() #screen updaten
        pg.display.set_caption('Simulation')
        self.screen.fill(self.backgroundcolor)
        running = True
        pg.display.update() #bildschirm updaten
        #Fenster permanent anzeigen
        while running:
            for event in pg.event.get():
                if event.type == pg.QUIT:
                    running = False
        pg.quit()
        sys.exit()

    def draw_vehicles(self):
        x = 100
        y = 150
        vertices = [(-10,-5),(10,-5),(10,5),(-10,5)]
        vertices = [ (x+v[0],y+v[1])for v in vertices]
        vehiclecolor = (255,0,0)
        gfxdraw.filled_polygon(self.screen, vertices, vehiclecolor)

    def draw_road(self):
        pass

    def draw_trafficlights(self):
        pass

    def draw(self):
        self.draw_vehicles()
        self.draw_road()
        self.draw_trafficlights()
        pg.display.update()
    
    

if __name__=='__main__':
    w = window()
    w.loop()
    w.draw()



