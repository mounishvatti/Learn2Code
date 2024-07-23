# walrus operator - assigns the value of the expression to the variable on the left

foods = list()
while food := input("Enter a food: ") != "quit":
    foods.append(food)