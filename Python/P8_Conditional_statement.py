num = int(input("Enter a number:\n"))
if num >= 33:
    print("Pass")
else:
    print("Fail")

num = int(input("Enter another number:\n"))
if num > 0:
    print("Positive")
    print("Nice")
elif num < 0:
    print("Negative")
else:
    print("Zero")

# even odd
if num % 2 == 0:
    print("Even")
else:
    print("Odd")

# nested if
# max of 3 mun
print("Enter three Numbers:\n")
a = int(input())
b = int(input())
c = int(input())

if a > b:
    if a > c:
        print("Max: ", a)
    else:
        print("Max: ", c)
else:
    if b > c:
        print("Max: ", b)
    else:
        print("Max: ", c)

# Ternary operator
print("Enter two number:\n")
a = int(input())
b = int(input())

# (ans1) if (condition) else (ans2)
ans = a if a > b else b
print("Max:", ans)
