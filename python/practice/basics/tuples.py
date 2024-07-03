# lists are mutable but tuples aren't 
# tuple -> ()

student = ("Mounish", 21, "Male")

print(student.count("Mounish"))
print(student.index("Male"))

for x in student:
    print(x)

if "Mounish" in student:
    print("Mounish is here")