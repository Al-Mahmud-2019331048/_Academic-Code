try:
    num1=int(input("Enter a number:"))
    num2=int(input("Enter another number:"))
    res=num1/num2
    print(res)
except (ValueError,ZeroDivisionError):
    print("Incerroct input")

finally:
    print("Ta Ta! bye bye! khatam!\n\n")


# raise
def voter(age):
    if age<18:
        raise ValueError("Invalid voter")
    return "You are allowed to vote"

try:
    # print(voter(18))
    print(voter(10))
except ValueError as e:
    print(e)