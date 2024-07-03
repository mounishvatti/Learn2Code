
temp = int(input("Enter the temperature outside: "))

if temp >= 0 and temp <= 30:
    print("The temperature is normal.")
elif temp == 0 or temp > 30:
    print("The temperature is bad today, stay inside!")
elif not(temp < 0):
    print("You'll freeze")
else:
    print("Stay safe")