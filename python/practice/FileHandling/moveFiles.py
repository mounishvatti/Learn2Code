import os

source = "practice/FileHandling/testfile_copy.txt"
destination = "/Users/mounishvatti/Desktop/testfile_copy.txt"

try:
    if os.path.exists(destination):
        print("There is already a file")
    else:
        os.replace(source, destination)
        print("Source file was moved to a new location")
except FileNotFoundError:
    print(source+" was not found")

# in a similar manner we can even move a folder/directory


