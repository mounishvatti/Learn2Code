# sort method
# sort function

import functools

students = ["John", "Mary", "Tom", "Anna", "Peter"]

students.sort(reverse=True)
print(students)

data = [("Mounish", "M", 8.3), 
        ("Rahul", "M", 8.5),
        ("Madhusruti", "F", 9), 
        ("Amisha", "F", 8), 
        ("Ryan", "M", 7.5)]

grade = lambda gpa: gpa[2]

data.sort(key=grade, reverse=True)
print(data)

# map() function
# reduce() function


list = [1, 2, 3, 4, 5]
factorial = functools.reduce(lambda x, y: x * y, list)
print(factorial)



