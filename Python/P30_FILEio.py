# read
# student = open("P30_student.txt", "r")
# """
# r-readable
# w-writeable
# r+-readable+writeable
# """
#
# # readable?
# print(student.readable())
#
# # reading the whole file
# text = student.read()
#
# print(text)
# print(len(text))  # total char of the file
#
# # you can also use for loop
# # file to list
# text=student.readlines()
# # text=student.readlines()[0]
# print(text)

# write
# student=open("P30_student.txt","w")
# student.write("All text are removed and this line is added\n")

# append
student=open("P30_student.txt","a")  #append
student.write("\nAl-Amin, MMC")    # added to the file

# create a new file
student=open("P30_student1.txt","a")
student.write("Saikat - MATH,BU\n")

ht=open("P30_hello.html","w")
ht.write("<h1>\nHello\n</h1>")
student.close()
ht.close()

