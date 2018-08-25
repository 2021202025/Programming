n = int(input())
i = 0
Real_Madrid = []

for i in range(n):
    Player = input()
    Real_Madrid.append(Player)

print(Real_Madrid)

Real_Madrid_Young = ['Isco', 'Marco Asensio', 'Odegaard']

Real_Madrid = Real_Madrid + Real_Madrid_Young

print(Real_Madrid)