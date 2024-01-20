num=[1,2,3,4,5]
res=list(map(lambda x: x*x ,num))
print(res)

# we can do the same thing more easily using list comprehensions

# map
# [expression for item in list]
result=[x*x for x in num]
print(result)


# filter
# ans=list(filter(lambda x:x%2==0,num))
ans=[x for x in num if x%2==0]
print(ans)