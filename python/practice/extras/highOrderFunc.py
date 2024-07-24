# higher order functions

def loud(text):
    return text.upper()

def quiet(text):
    return text.lower()

def hello(func):
    text = func("Hello")
    print(text)

hello(loud)
hello(quiet)


def divisor(x):
    def dividend(y):
        return x / y
    return dividend

print(divisor(10)(2))
# or 
divide = divisor(10)
print(divide(2))

