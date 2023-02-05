class sphere:

	def __init__(self) -> None:
		self.__r: int
		self.__x: int
		self.__y: int

	@property
	def r(self) -> int:
		'''
		Getter method for the radius of the sphere
		'''
		return self.__r

	@r.setter
	def r(self, r:int) -> None:
		'''
		Setter method for the radius of the sphere
		'''
		self.__r = r

	@property
	def x(self) -> int:
		'''
		Getter method for the x position of the sphere
		'''
		return self.__x

	@x.setter
	def x(self, x:int) -> None:
		'''
		Setter method for the x position of the sphere
		'''
		self.__x = x

	@property
	def y(self) -> int:
		'''
		Getter method for the y position of the sphere
		'''
		return self.__y

	@x.setter
	def y(self, y:int) -> None:
		'''
		Setter method for y position of the sphere
		'''
		self.__y = y