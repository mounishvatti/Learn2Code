x = 10

def print_x1():
    global x # x is now global
    x = 20
    print(x)

print_x1()
print(x)


def print_x2():
    x = 30 # this value is local to the function
    print(x)

print_x2()
print(x)


def print_x3():
    x = 40

    def print_x4():
        nonlocal x # can only access the variable declared in the outer scope
        x = 50
        print(x)
    
    print_x4()

print_x3()
print(x)