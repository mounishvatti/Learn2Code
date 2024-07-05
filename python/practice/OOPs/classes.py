class Car:
    make = None
    model = None
    year = None
    color = None

    def __init__(self, make, model, year, color): # constructor
        self.make = make
        self.model = model
        self.year = year
        self.color = color
 
    def drive(self): # methods
        print("This " + self.model + " is driving")
    
    def stop(self):
        print("This " + self.model + " car is stopping")

# creating an object of the class
car_1 = Car(make="Chevy", model = "Corvette", year = "2021", color = "Yellow")  

print(car_1.make)
print(car_1.model)
print(car_1.year)
print(car_1.color)

car_1.drive()
car_1.stop()

