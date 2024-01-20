class Shape:
    def __init__(self, dim1, dim2):
        self.dim1 = dim1
        self.dim2 = dim2

    def area(self):
        print("I am Area method")


class Rectangle(Shape):
    def area(self):
        res = self.dim1 * self.dim2
        print("Area of Rectangle:", res)


class Triangle(Shape):
    def area(self):
        res = 0.5 * self.dim1 * self.dim2
        print("Area of Triangle:", res)


t = Triangle(20, 30)   #super class have constructor to set values
t.area()
r = Rectangle(20, 30)
r.area()
