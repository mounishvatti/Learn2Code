# dictionary = a changable unordered collection of unique key:value pairs, fast cuz they use hashing, allow us to access a value quickly

capitals = {'India':'Delhi', 
            'USA':'Washington DC', 
            'UK':'London',
            'Russia':'Moscow'}

#print(capitals["India"])

print(capitals.get("Germany"))

print(capitals.values())
print(capitals.keys())

print(capitals.items())
print(capitals)

capitals.update({'Germany':'Berlin'})

capitals.update({'USA':'LA Vegas'})

capitals.pop("UK")

print(capitals)