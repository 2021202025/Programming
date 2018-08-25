def Collection(Dictionary):
    for key, val in Dictionary.items():
        print(f'Best Car in {key} is {val}')



Best_Cars = {}

while True:
    Category = input('Category: ')
    Best_Car = input('Best: ')
    Best_Cars[Category] = Best_Car

    Another = input('Done yet? y/n ')

    if(Another == 'n'):
        continue

    else:
        break

Collection(Best_Cars)