import pygame as pg 
from pygame import gfxdraw
import sys

# Fenster erzeugen

screen = pg.display.set_mode((400,300))
pg.display.update() #screen updaten
  
pg.display.set_caption('Simulation')
running = True
screen.fill((250,250,250))

#Fenster permanent anzeigen
while running:
    for event in pg.event.get():
        if event.type == pg.QUIT:
            running = False

pg.quit()
sys.exit()
