# arr = [1,2,3,4,5,6,7,8,9]

# def findMax(arr):
#     max = arr[0]
#     for i in arr:
#         if i > max:
#             max = i
#     return max

# print(findMax(arr))

class Test:
    def __init__(self, name="John", age=25):
        self.name = name
        self.age = age

    def set_param(self, name, age):
        self.name = name
        self.age = age

    def display(self):
        print("Name: ", self.name)
        print("Age: ", self.age)

class Exam(Test):
    def __init__(self, name="Name", age = 20, marks = 0):
        self.name = name
        self.age = age
        self.marks = marks
    
    def set_marks(self, marks):
        self.marks = marks
    
    def display_marks(self):
        print("Marks: ", self.marks)

    def displayAll(self):
        print("Name: ", self.name)
        print("Age: ", self.age)
        print("Marks: ", self.marks)

# t1 = Test()
# t2 = Test()

# t3 = Test("Madhu", 23)

p1 = Exam()

p1.set_marks(97)
p1.set_param("Ramya", 20)

# p1.display_marks()
p1.displayAll()


# t1.set_param("Mounish", 22)
# t2.set_param("Rahul", 21)

# t1.display()

# t2.display()

# t3.display()


# def hello(name):
#     print("Hello ", name)

# hello("Mounish")
# hello("Rahul")
# hello("Madhu")


# print("Hello!")

# print(39)