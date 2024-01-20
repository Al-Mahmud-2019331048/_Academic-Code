class Phone:
    def __init__(self):
        print("I am Phone class's constructor")


class Samsung(Phone):
    # pass
    def __init__(self):    # overriding
        super().__init__()
        print("I am Samsung class's constructor")


s = Samsung();
