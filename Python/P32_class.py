class Student:
    roll = ""
    gpa = ""

    def setVal(self, roll, gpa):
        self.roll = roll
        self.gpa = gpa

    def display(self):
        print(f"Roll: {self.roll}, GPA: {self.gpa}")


# creating object
rahim = Student()

# isinstance or not?
# print(isinstance(rahim,Student))

# accessing manuLly
rahim.roll = 101
rahim.gpa = 3.66
print(f"Roll: {rahim.roll}, GPA: {rahim.gpa}")

# using method
karim = Student()
karim.setVal(102, 3.56)
karim.display()
