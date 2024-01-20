class Student:
    roll = ""
    gpa = ""

    # constructor
    def __init__(self, roll, gpa):
        self.roll = roll
        self.gpa = gpa

    def display(self):
        print(f"Roll: {self.roll}, GPA: {self.gpa}")


rahim = Student(102, 3.44)    # initializing constructor
rahim.display()
