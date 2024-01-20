from abc import ABC, abstractmethod

class Shape:
    def __init__(self, dim1, dim2):
        self.dim1 = dim1
        self.dim2 = dim2

    @abstractmethod
    def area(self):
        pass  # no body abstract method


class Triangle(Shape):

    def area(self):
        res = 0.5 * self.dim1 * self.dim2
        print("Area of Triangle:", res)


# we cannot create object of abstract class
# s = Shape()

t = Triangle(10, 20)
t.area()
