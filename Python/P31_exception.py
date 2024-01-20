# runtime error

# a=input("Enter a number:")    # int-TypeError
# ans=20/a                    #   a=0 - ZeroDivisionError
# print(ans)

try:
    num = [1, 0, 3]
    res = num[0] / num[1]
    num[5] = 4
except ZeroDivisionError:
    print("Dividing by zero is not possible")
except IndexError:
    print("Index out of bounds")
finally:
    print("This line will always be printed")

print("End-Of-Program")
