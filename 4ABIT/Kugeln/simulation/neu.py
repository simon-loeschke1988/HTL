import pygame
import random

class Ball:
    def __init__(self, screen, x, y, color):
        self.screen = screen
        self.color = color
        self.x = x
        self.y = y
        self.speed_x = random.randint(1, 10)
        self.speed_y = random.randint(1, 10)
        self.radius = 10

    def draw(self):
        pygame.draw.circle(self.screen, self.color, (self.x, self.y), self.radius)

    def move(self):
        screen_width = self.screen.get_width()
        screen_height = self.screen.get_height()

        self.x += self.speed_x
        self.y += self.speed_y

        if self.x + self.radius >= screen_width or self.x - self.radius <= 0:
            self.speed_x = -self.speed_x
        if self.y + self.radius >= screen_height or self.y - self.radius <= 0:
            self.speed_y = -self.speed_y

# Hauptprogramm
pygame.init()
screen = pygame.display.set_mode((400, 300))
clock = pygame.time.Clock()

ball = Ball(screen, 200, 150, (255, 0, 0))

running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

    screen.fill((255, 255, 255))
    ball.move()
    ball.draw()
    pygame.display.update()
    clock.tick(60)

pygame.quit()