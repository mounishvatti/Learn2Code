# exception is an event which interrupts the flow of a program

numerator = int(input("Enter the numerator: "))
denominator = int(input("Enter the denominator: "))
try:
    result = numerator / denominator
except ZeroDivisionError as e:
    print(e)
    print("The denominator cannot be zero")
except ValueError as e:
    print(e)
    print("Enter only integers, other datatypes are not allowed")
except Exception as e:
    print(e)
    print("Something went wrong, please try again!")
else:
    print("The result is: ", result)
finally:
    print("This will always execute")

