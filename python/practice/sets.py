# set = collection which is unordered, unindexed, NO DUPLICATE VALUES

utensils = {"fork", "spoon", "knife"}

dishes = {"bowl", "plate", "cup", "knife"}

# utensils.add("napkin")
# utensils.remove("fork")

print(utensils)
print(dishes)

dinner_table = utensils.union(dishes) # dishes.union(utensils)
# utensils.update(dishes)
# dishes.update(utensils)
print(dinner_table)

print(utensils.difference(dishes))
print(utensils.intersection(dishes))