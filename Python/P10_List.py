name = ["Mahmud", "Adil", "Tonmoy", "Sakib", "Soyeb"]
print(name)

# to access certain index
print(name[0])

# to print a range of index value
print(name[1:4])

# to print values from an index to the end
print(name[2:])

# to print reversly indexed
print(name[-1])
print(name[-2])

# to check a item is in list or not
print("Tonmoy" in name)
print("Salim" in name)

# to check a item is not in list or not
print("Tonmoy" not in name)
print("Salim" not in name)

# to add items
print(name + ["Javid", 20])  # in fact int also

# to print multiple time
print(name * 3)

# Functions of list
language = ["C", "C++", "Java", "Python", "Basic"]

# length
print(len(language))

# appending new value at last
language.append("Toc")
print(language)

# inserting an item
language.insert(3, "OS")
print(language)

# to remove an item of first occurance
language.remove("Toc")
print(language)

# sorting
language.sort()
print(language)
age = [10, 23, 9, 20, 3]
age.sort()
print(age)

# reversely sortlig
age.reverse()
print(age)

# popping lat element
language.pop()
print(language)

# clearing all item
age.clear()
print(age)

# copying all items
subject = language
print(subject)

# first position of an item
pos = language.index("C++")
print(pos)

# freqency of an item
cnt = language.count("C++")
print(cnt)

# iterating each elements
# while
i = 0
while i < len(language):
    print(language[i])
    i += 1

# for each loop
for x in language:
    print(x)
