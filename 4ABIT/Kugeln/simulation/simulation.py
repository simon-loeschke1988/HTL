from .sphere import sphere

class simulation():

	def __init__(self) -> None:
		self.__t:float = 0.0
		self.__dt:float = 0.0
		self.__spheres:list = []

	@property
	def t(self) -> float:
		return self.__t

	@t.setter
	def t(self, t) -> None:
		self.__t = t

	@property
	def dt(self) -> float:
		return self.__dt

	@dt.setter
	def dt(self, dt) -> None:
		self.__dt = dt

	def addSphere(self, s:sphere) -> None:
		self.__spheres.append(s)
		print(s.x, s.y, s.r)