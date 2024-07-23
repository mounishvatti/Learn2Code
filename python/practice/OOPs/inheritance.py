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


rabbit = Rabbit()
hawk = Hawk()
fish = Fish()

rabbit.eat()
hawk.fly()
fish.swim()