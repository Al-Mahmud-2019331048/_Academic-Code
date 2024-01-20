def square(a, b):
    return a * a + 2 * a * b + b * b


# lambda parameter : expression

var=(lambda a, b: a * a + 2 * a * b + b * b)(3,4)

print(square(2, 3))
print(var)
print((lambda a, b: a * a + 2 * a * b + b * b)(2, 3))   # all in one line

