from collections import deque

bank=deque(["A","B","C"])
print(bank)
bank.popleft()
print(bank)
if not bank:  # empty?
    print("No person left")
bank.popleft()
print(bank)
if not bank:  # empty?
    print("No person left")
bank.popleft()
print(bank)
if not bank:  # empty?
    print("No person left")
