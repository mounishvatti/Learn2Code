a = 10
b = 15

a = a + b # 25

b = a - b # 25-15 = 10
a = a - b # 25-10 = 15

c = 10
d = 15

c = c ^ d 
d = c ^ d # (c ^ d) ^ d = c
c = c ^ d # (c ^ d) ^ c = d

print(a,b)
print(c,d)

