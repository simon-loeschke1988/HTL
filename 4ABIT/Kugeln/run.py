import random
from simulation import *

if __name__ == '__main__':
	# Simulationsparamter festlegen
	windowWidth = 400
	windowHeight = 400
	sphereRadius = 10

	# Zufällige Position für die Kugel festlegen 
	s = sphere()
	s.r = sphereRadius
	s.x = random.randint(2*sphereRadius, windowWidth-2*sphereRadius)
	s.y = random.randint(2*sphereRadius, windowHeight-2*sphereRadius)

	# Simulation erstellen
	sim = simulation()
	sim.t  = 0.0 # set the simulation time
	sim.dt = 0.1 # set the time step
	sim.addSphere(s) #

	# Fenster erstellen
	win = window(sim)
	win.width = windowWidth
	win.height = windowHeight

	# Simulation starten
	win.loop()
 