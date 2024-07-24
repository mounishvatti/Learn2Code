# lambda

# lambda is a function that can be defined in a single line
addOne = lambda x: x + 1
print(addOne(1))

addNums = lambda x, y: x + y
print(addNums(1, 2))

addNums = lambda x, y, z: x + y + z
print(addNums(1, 2, 3))

def add(x, y):
    return x + y

def add(x,y,z):
    return x + y + z

checkAge = lambda age: True if age >= 18 else False
print(checkAge(20))

