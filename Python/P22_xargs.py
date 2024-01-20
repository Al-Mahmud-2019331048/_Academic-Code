# xargs
# variable length arguments
def students(*items):
    print(items)  # print(items[0])


# tuples
students(48, "Mahmud", 3.88)
students(53, "Sakib", 3.48)


# function can be define anywhere
def add(*nums):
    sum = 0
    for i in range(len(nums)):
        sum += nums[i]
    return sum


res = add(1, 2, 3, 6, 2.4, -3, 4)
print(res)
