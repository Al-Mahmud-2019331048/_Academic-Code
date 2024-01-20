# __magic-method__(self,other)
# for comparison objects
"""
__lt__  <
__le__  <=
__eq__  ==
__ne__  !=
__gt__  >
__ge__  >=
"""

class Bike:
    def __init__(self,name,color):
        self.name=name
        self.color=color
    def display(self):
        print(f"Name: {self.name} , Color: {self.color}")

    def __str__(self):
        return (f"Name: {self.name} , Color: {self.color}")
    def __eq__(self, other):
        return self.name==other.name and self.color==other.color

b1=Bike("Yamha R15","Blue")
b2=Bike("Yamha FZ","Red")

b1.display()
# printing by magic method
print(str(b2))
print(b1==b2)

