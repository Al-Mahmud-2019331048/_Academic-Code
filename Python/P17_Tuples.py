# immutable list
# much faster than list

student = (
    "Mahmud", "Tonmoy", "Alim"
)

print(student)

for i in range(len(student)):
    print(student[i])

# student[0]="Mugdo"   #error

# nested Touples
students=(
    ("Mahmud",22,3.88),
    ("Salam", 21, 3.58),
    ("Mainul", 22, 3.91),
    ("Sadman", 20, 3.50)
)

print(students)
print(students[0])
print(students[1:])   # allow slicing(1 to end)