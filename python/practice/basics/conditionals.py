age = int(input("Enter your age: "))

if age >= 18:
    print("You are eligible to vote.")
elif age < 0:
    print("Invalid age.")
else:
    print("You are not eligible to vote.")

