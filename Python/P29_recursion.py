def fact(x):
    if x == 1:
        return 1
    else:
        return x * fact(x - 1)


print(fact(4))



def gcd(a, b):
    if b == 0:
        return a
    else:
        return gcd(b, a % b)


def lcm(a, b):
    x = gcd(a, b)
    return int((a * b) / x)


print(gcd(3, 21))
print(lcm(3, 21))
