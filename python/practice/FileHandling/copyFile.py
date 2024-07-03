import shutil
import os

# copyfile() = copies contents of a file
# copy() = copyfile() + permission mode + destination can be directory
# copy2() = copy() + copies metadata (files's creation and modification times)

path = "practice/files/testfile.txt"
new_path = "practice/files/testfile_copy.txt"
try:
    shutil.copyfile(path, new_path)
except Exception as e:
    print(e)
    print("Something went wrong")
else:
    print("File copied successfully")
    print("New file path: ", new_path)