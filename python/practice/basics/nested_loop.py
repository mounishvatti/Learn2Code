rows = int(input("Enter rows: "))
columns = int(input("Enter columns: "))

symbol = input("Enter symbol: ")

for i in range(rows):
    for j in range(columns):
        print(symbol, end=" ")
    print()

# loop control statements 

# break - used to terminate the loop entirely
# continue - skips to the next iteration of the array
# pass - does nothing, acts as a placeholder

while True:
    name = input("Enter your name: ")
    if name != "":
        break


