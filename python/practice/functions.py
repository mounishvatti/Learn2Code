def checkEven(num):
    if num%2 == 0:
        print(str(num) +" is an even number")

def add(num1, num2):
    return num1 + num2

checkEven(4)

print(add(4, 5))

def hello(name):
    print("Hello " + name)

name = "Mounish"

hello(name)

def sum(arr):
    sum = 0
    for i in arr:
        sum += i
    return sum

arr = [1, 2, 3, 4, 5]

print(sum(arr))