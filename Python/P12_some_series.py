# 1+2+3+....+n
n = int(input("Enter a number:"))
sum = 0
for i in range(1, n + 1, 1):
    sum += i
print(sum)

# 2+4+6+....+n
n = int(input("Enter a number:"))
sum = 0
for i in range(2, n + 1, 2):
    sum += i
print(sum)

# 1+3+5+....+n
n = int(input("Enter a number:"))
sum = 0
for i in range(1, n + 1, 2):
    sum += i
print(sum)

# 1^2+2^2+3^2+....+n^2
n = int(input("Enter a number:"))
sum = 0
for i in range(1, n + 1, 1):
    sum += i*i
print(sum)

# 1+1/2+1/3+....+1/n
n = int(input("Enter a number:"))
sum = 0.0
for i in range(1, n + 1, 1):
    sum += 1/i
print(sum)

# factorial
n=int(input("Enter a number to calculate factorial:"))
ans=1
for i in range(1,n+1,1):
    ans*=i
print(ans)

# pattern
"""
    *
    **
    ***
"""
for i in range(4):
    print(i*"*")

"""
    *
    ***
    *****
"""
for i in range(4):
    print((2*i-1)*"*")