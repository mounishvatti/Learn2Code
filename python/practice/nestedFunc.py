# nested function calls : use other function within another function

def outer():
    def inner():
        print("This is inner function")
    print("This is outer function")
    
    inner()
    
outer()

