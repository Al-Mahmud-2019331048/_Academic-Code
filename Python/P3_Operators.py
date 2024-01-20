# numerical or arithmatic
print(10 + 5)
print(10 - 5)
print(10 * 5)
print(10 / 5)  # float
print(11 / 3)  # result in float
print(10 % 5)  # modulus
print(10 // 4)  # floor ,ans=2
print(2 ** 3)  # exponentiation 2^3

# relational
print(10 > 20)
print(20 >= 10)
print(10 == 10)
print(10 != 10)
print("Mahmud" == "mahmud")

# boolean
t = True
print(t)

# Logical
# and
#max of 3 number
a = 10
b = 6
c = 12
if a > b and a > c:
    print("Max:", a)
elif b > a and b > c:
    print("Max:", b)
else:
    print("Max:", c)

# or
# vowel or consonant
ch='A'
ch=ch.lower()
if ch=='a' or ch=='e' or ch=='i' or ch=='o' or ch=='u':
    print(f"{ch} is vowel\n")
else :
    print(f"{ch} is consonant\n")