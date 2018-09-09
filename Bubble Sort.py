bubble = []
n = int(input('Enter the number of elements '))

for i in range(n):
    a = int(input())
    bubble.append(a)

print(bubble)

for i in range(n):
    for j in range(n-1):
        if(bubble[j]>bubble[j+1]):
            temp = bubble[j+1]
            bubble[j+1] = bubble[j]
            bubble[j] = temp

print(bubble)
