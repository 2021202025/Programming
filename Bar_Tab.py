class Tab:

    menu = {
    'Wine': 5,
    'Beer': 4,
    'Whiskey': 10,
    'Chicken': 12,
    'Noodles': 7
    }

    def __init__(self):
        self.total = 0
        self.items = []


    def add(self,item):
        self.items.append(item)
        self.total += self.menu[item]


    def print_bill(self, Tax, GST):
        GST = (GST/100) * self.total
        Tax = (Tax/100) * self.total
        Total = self.total + GST + Tax


        for item in self.items:
            print(f'{item:15}: Rs {self.menu[item]}')

        print(f'{"Total":15}: Rs {Total}')