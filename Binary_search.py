n = int(input())
numbers = []

for i in range(n):
    a = int(input())
    numbers.append(a)

print(numbers)

x = sorted(numbers)
print(x)

first = 0
middle = 0
last = n
flag = 0

search = int(input("Enter the element to be searched: "))

for i in range(len(numbers)):
    middle = (first + last)// 2
    if(search == numbers[middle]):
        print("Element found at %d " % (middle))
        flag = 1
        break

    elif(search > numbers[middle]):
        first = middle+1

    elif(search < numbers[middle]):
        last = middle-1

if(flag == 0):
    print("Element not found ")