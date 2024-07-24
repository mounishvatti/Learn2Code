import tkinter as tk

# Create the main window
root = tk.Tk()
root.title("Black Background with White Square")

# Set the window size
window_width = 640
window_height = 480
root.geometry(f"{window_width}x{window_height}")

# Create a canvas widget
canvas = tk.Canvas(root, width=window_width, height=window_height, bg='black')
canvas.pack()

# Calculate the size and position of the white square
square_size = 100
x1 = (window_width / 2) - (square_size / 2)
y1 = (window_height / 2) - (square_size / 2)
x2 = x1 + square_size
y2 = y1 + square_size

# Draw the white square on the canvas
canvas.create_rectangle(x1, y1, x2, y2, fill='white')

# Start the Tkinter event loop
root.mainloop()