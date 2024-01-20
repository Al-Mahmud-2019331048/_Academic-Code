
mat=[
    [1,2,3],
    [4,5,6],
    [7,8,9,10]
]

print(mat)
print(mat[0][2])


# for each loop
for row in mat:
    for col in row:
        print(col)

# just for loop
for row in range(len(mat)) :
    for col in range(len(mat[row])):
        print(mat[row][col])