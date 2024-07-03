import os
import shutil

path = "practice/FileHandling/lame.txt"
try:
    os.remove(path)
except FileNotFoundError:
    print("That file was not found so it couldn't be deleted")
except PermissionError:
    print("You do not have permission to delete that file")
except OSError:
    print("You cannot delete that using this function")
else:
    print("Deleted Successfully")

# os.rmdir - remove an empty directory
# shutil.rmtree(path) - delete a directory containing files

