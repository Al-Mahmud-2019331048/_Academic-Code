books=[]
books.append("C")
books.append("C++")
books.append("Java")
print(books)
books.pop()
print(books)
print("Now the top book is:",books[-1])  # top element
books.pop()
print(books)
print("Now the top book is:",books[-1])  # top element
books.pop()
# print("Now the top book is:",books[-1])  # top element
if not books:
    print("No books left")
