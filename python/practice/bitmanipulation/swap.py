# Method - 1 (Using a temporary variable)
a = 10
b = 15

temp = a
a = b
b = temp

# Method - 2 (Using addition and subtraction)
a = 10
b = 15

a = a + b # 25
b = a - b # 25-15 = 10
a = a - b # 25-10 = 15

# Method - 3 (Using XOR operator)
c = 10
d = 15

c = c ^ d 
d = c ^ d # (c ^ d) ^ d = c
c = c ^ d # (c ^ d) ^ c = d

# Method - 4 (Using multiplication and division)
e = 10
f = 5

e = e * f
f = int(e/f) # (e * f)/f = e 
e = int(e/f) # (e * f)/e = f

# Method - 5 (Using python's tuple unpacking)
g = 10
h = 15

g, h = h, g

########################

print(a,b)
print(c,d)
print(e,f)
