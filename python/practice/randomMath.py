import random

x = random.randint(1,9)
y = random.randint(1,9)

print(x)
print(y)

my_list = ['rock', 'paper', 'scissors']

z = random.choice(my_list)

print(z)

cards = [1,2,3,4,5,6,7,8,9]

random.shuffle(cards)

print(cards)