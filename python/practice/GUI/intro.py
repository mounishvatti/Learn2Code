from tkinter import *

window = Tk()
window.title("GoAir - Book flight tickets")
window.geometry("400x200")
window.resizable(True, True)
window.configure(bg="white")
icon = PhotoImage(file="icon.png")
window.iconphoto(True, icon)


label = Label(window, text="Hello World", font=("Helvetica", 20))
label.pack()

button = Button(window, text="Click Me", command=window.destroy)
button.pack()

window.mainloop()

