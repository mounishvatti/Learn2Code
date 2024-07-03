# str.format() = optional method that gives users more control when displaying output

animal = "cow"
item = "moon"

# 1. Using the old way of formatting strings
print("The " + animal + " jumped over the " + item + ".")

# 2. Using the format() method
print("The {} jumped over the {}.".format(animal, item))
print("The {0} jumped over the {1}.".format(animal, item))
print("The {1} jumped over the {0}.".format(animal, item))

print("The {animal} jumped over the {item}.".format(animal="cow", item="moon"))

# 3. Using f-strings
print(f"The {animal} jumped over the {item}.")


number = 3.14159
price = 2450000

print("The number pi is: {:.2f}".format(number))
print("The price is {:,}".format(price))
print("The price is {:b}".format(price))
print("The price is {:o}".format(price))
print("The price is {:X}".format(price))
print("The price is {:E}".format(price))