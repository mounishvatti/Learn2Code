# *args = packs all arguments into a tuple

def add(*args):
    return sum(args)

print(add(1, 2, 3, 4, 5))  # 15

# or

def add(*args):
    total = 0
    for num in args:
        total += num
    return total

print(add(1, 2, 3, 4, 5))  # 15

