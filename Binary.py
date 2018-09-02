N = int(input())
a = []
p = []


for _ in range(N):
    n = int(input())
    a.append(n)
print(a)

for i in range(1, N+1):
    x = N//i
    p.append(x)

print(p)