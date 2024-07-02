# **kwargs = parameter that pack all the arguments into a dictionary

def hello(**kwargs):
    print("Hello", end=" ")
    for key, value in kwargs.items():
        print(value, end=" ")


hello(first = "Mounish", last = "Vatti")