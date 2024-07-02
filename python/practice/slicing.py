# slicing [start:stop:step]

# slice() or indexing[]

name = "Mounish Vatti"

first_name = name[:7]
last_name = name[8:13]

print(first_name)
print(last_name)

revname = name[::-1]

print(revname)

website = "https://mounishvatti.me"

slice = slice(8,-3)

print(website[slice])