class Phone:
    def call(self):
        print("Call me")

    def message(self):
        print("Message me")


class Samsung(Phone):
    def photo(self):
        print("Capture me")


s = Samsung();
s.call()
s.message()
s.photo()

# check subclass or not
print(issubclass(Samsung,Phone))