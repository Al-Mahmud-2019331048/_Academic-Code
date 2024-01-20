# build in polymorphism function
# len
print(len("Al Mahmud"))
print(len([1, 2, 3, 4]))


# user defined polymorphic function
def add(x, y, z=0):
    return x + y + z


print((add(2, 3)))
print(add(2, 3, 4))


# overriden method is also polymorphic method
class Shape:
    def __init__(self, dim1, dim2):
        self.dim1 = dim1
        self.dim2 = dim2

    def area(self):
        pass


class Triangle(Shape):
    def area(self):
        return 0.5 * self.dim1 * self.dim2


class Rectangle(Shape):
    def area(self):  # polymorphism
        return self.dim1 * self.dim2

t=Triangle(20,20)
print(t.area())