
str="10 20 30 40 50 60 70 80"
list=str.split()
print(list)

nWords=0
nDigits=0
nLetters=0
text=input("Enter a text:")
for x in text:
    x=x.lower()
    if x>='a' and x<='z':
        nLetters+=1
    elif  x>='0' and x<='9':
        nDigits+=1
    elif x==' ':
        nWords+=1
nWords+=1

print("Letters: ",nLetters)
print("Words: ",nWords)
print("Digits: ",nDigits)