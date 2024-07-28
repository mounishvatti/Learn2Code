item1 = 'Phone'
item1_price = 100000
item1_quantity = 100
item1_price_total = item1_price * item1_quantity

# creating like this every time is not a good practice, hence we can create a class to store the item details

class Item:
    def __init__(self, name, price, quantity):
        self.name = name
        self.price = price
        self.quantity = quantity

    def change_price(self, new_price):
        self.price = new_price
        print(self.name, "price changed to", self.price)
    
    def change_quantity(self, new_quantity):
        self.quantity = new_quantity
        print(self.name, "quantity changed to", self.quantity)

    def calculate_total_price(self):
        price_total = self.price * self.quantity
        return price_total

    def display(self):
        print(self.name, self.price, self.quantity)

item2 = Item(name='Laptop', price=20000, quantity=5)
# item2.display()

item3 = Item(name='Keyboard', price=1000, quantity=1)
# item3.display()

item3.change_price(new_price=1500)
# item3.display()

item3.change_quantity(new_quantity=2)
# item3.display()

print("Total price is:", item3.calculate_total_price())