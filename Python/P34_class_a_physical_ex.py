class Triangle:
    base = ''
    height = ''

    def __init__(self, base, height):
        self.base = base
        self.height = height

    def Area(self):
        return 0.5 * self.base * self.height


t1 = Triangle(10, 20)
print(t1.Area())

t2 = Triangle(20, 30)
print(t2.Area())
