# unordered collection of items
# no access of definite index
# no duplicate item

s={1,6,2,3,4,5,6,5,2,4}
print(s)
s.add(10)
print(s)
s.remove(6)
print(s)
print(4 in s)

ss={4,5,10,12,13}

print(s | ss)   # union set
print(s & ss)  # Intersection set
print(s-ss)


# list to set
l=[2,4,6,7,2,4]
s=set(l)
print(l)
print(s)