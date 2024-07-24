from tkinter import *

window = Tk()
window.title("Hello World")
window.geometry("400x200")
window.resizable(False, False)
window.configure(bg="white")
window.configure(highlightbackground="black")
window.configure(highlightcolor="black")
window.configure(highlightthickness=2)
window.configure(highlightbackground="black")
window.configure(highlightcolor="black")
window.configure(highlightthickness=2)

label = Label(window, text="Hello World", font=("Helvetica", 20))
label.pack()

button = Button(window, text="Click Me", command=window.destroy)
button.pack()

window.mainloop()

