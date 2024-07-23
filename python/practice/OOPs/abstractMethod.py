# abstract method - a method that does not have a body and needs to be implemented by the child class

from abc import ABC, abstractmethod


class Vehicle(ABC):
    @abstractmethod
    def go(self):
        pass

    @abstractmethod
    def stop(self):
        pass


class Car(Vehicle):
    def go(self):
        print("This car is moving")  # method overriding

    def stop(self):
        print("This car is stopping")


class Motorcycle(Vehicle):
    def go(self):
        print("This motorcycle is moving")

    def stop(self):
        print("This motorcycle is stopping")


car = Car()
motorcycle = Motorcycle()

car.go() 
motorcycle.go()
