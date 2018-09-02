N = int(input())

s1 = 1
s2 = 1
result = 0



for i in range(1,N+1):
    if(i%2==0):
        s1 = s1*3
        result = s1
    else:
        s2 = s2*4
        result = s2

print(result)

