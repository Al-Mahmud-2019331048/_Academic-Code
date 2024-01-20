# key->val (like map in c++)

studentID={
    48:"Mahmud",
    63: "Sami",
    3: "Fahim"
}

print(studentID[48])
# or
print(studentID.get(3))
print(studentID.get(50))
print(studentID.get(50,"Not a valid key"))


