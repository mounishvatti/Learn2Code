# method chaining = calling multiple methods sequentially

class Car:
    def turn_on(self):
        print("Car is starting")
        return self

    def drive(self):
        print("Car is driving")
        return self

    def stop(self):
        print("Car is stopping")
        return self

    def turn_off(self):
        print("Car is shutting down")
        return self


car = Car()
car.turn_on()\
    .drive()\
    .stop()\
    .turn_off()

# Output:
# Car is starting
# Car is driving
# Car is stopping
# Car is shutting down

# In the above example, we are calling the methods turn_on(), drive(), stop(), and turn_off() sequentially.


