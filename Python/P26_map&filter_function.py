# map(function,list or iterable object)

def fun(x):
    return x * x


def addBy3(x):
    return x + 3


num = [1, 2, 3, 4]    # list
res = list(map(fun, num))  # returns list
print(res)

num = (1, 2, 3, 4)  # Tuple
res = tuple(map(addBy3, num))  # returns list
print(res)


# filter

num=[1,2,3,4,5,6]
ans=list(filter(lambda x:x%2==0,num))
print(ans)