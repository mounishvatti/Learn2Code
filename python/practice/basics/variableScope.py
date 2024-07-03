# scope - global, local

# Global scope
x = 10
print(x)

# Local scope
def foo():
    x = 20
    print(x)

foo()
print(x)
