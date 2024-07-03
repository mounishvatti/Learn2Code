import os

path = "practice/files/testfile.txt"

# Check if the file exists\
if os.path.exists(path):
    print("That location exists")
    if os.path.isfile(path):
        print("That is a file")
    elif os.path.isdir(path):
        print("That is a directory")
else:
    print("File does not exist")

print()

# print the contents of the file
# open the file in read mode

# we are supposed to close the file manually if we have this approach
file = open(path, "r")
print(file.read())
#file.close()
print(file.closed)

print()

# closes the file automatically after working with them
try:
    with open(path) as file:
        print(file.read())
except FileNotFoundError:
    print("That file was not found")

print(file.closed)

