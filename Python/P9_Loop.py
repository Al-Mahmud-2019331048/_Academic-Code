# while
i = 1  # initialization
while i <= 10:  # condition
    print(i)
    i += 1  # update

end = 10
# end = int(input("Enter the last number:\n"))
i = 1
sum = 0
while i <= end:
    sum += i;
    i += 1;
print("Sum:", sum)

# for
print("For loop:")
for i in range(3,10):       # print 3 to 9
    print(i)
for i in range(2,20,2):       # print 2 to 19 and even number
    print(i)

# break and continue
print("break and continue")
i = 1
while i <= 100:
    print(i)
    if i == 20:
        break      # terminating loop
    i += 1
print("Broken")

i=0
while i <= 100:
    i += 1
    if i == 20:
        print("Continued")
        continue      # skip the iteration
    print(i)

i=1
while i <= 100:
    if i == 20:
        # print("Continued")
        continue      # skip the iteration
    print(i)
    i += 1

