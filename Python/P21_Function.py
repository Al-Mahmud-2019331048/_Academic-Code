def add(a, b):
    print(a + b)


def add3(a, b, c):
    return a + b + c


def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)


def sms():
    print("No Parameter")


sms()
add(10, 20)
add(2.3, 4)
print(add3(2, 3, 4))
x = gcd(2, 16)
print(x)
