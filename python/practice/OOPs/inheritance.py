class Animal:
    alive = True

    def eat(self):
        print("Eating")

    def sleep(self):
        print("Sleeping")


class Rabbit(Animal):
    def run(self):
        print("This rabbit is running")


class Fish(Animal):
    def swim(self):
        print("The fish is swimming")


class Hawk(Animal):
    def fly(self):
        print("The hawk is flying")


# rabbit = Rabbit()
# hawk = Hawk()
# fish = Fish()
#
# rabbit.eat()
# hawk.fly()
# fish.swim()


# Multi-level inheritance

class Organism:
    alive = True

class Animal(Organism):
    def eat(self):
        print("This animal is eating")

class Dog(Animal):
    def bark(self):
        print("This dog is barking")

dog = Dog()

# dog.eat()
# dog.bark()
# print(dog.alive)


# Multiple inheritance

class A:
    def methodA(self):
        print("This is from class A")

class B:
    def methodB(self):
        print("This is from class B")

class C(A, B):
    def methodC(self):
        print("This is from class C")

# c = C()
# c.methodA()
# c.methodB()
# c.methodC()

# Method overriding

class A:
    def method(self):
        print("This is from class A")

class B(A):
    def method(self):
        print("This is from class B")

a = A()
b = B()

a.method()  # This is from class A
b.method()  # This is from class B
