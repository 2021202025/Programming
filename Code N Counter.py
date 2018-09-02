input1 = input()
input2 = input()

p = set(input1)

if(input2 == 'Binary'):
    input2 = {'0','1'}
if(input2 == 'Decimal'):
    input2 = {'0','1','2','3','4','5','6','7','8','9'}
if(input2 == 'Octal'):
    input2 = {'0','1','2','3','4','5','6','7'}
if(input2 == 'Hex'):
    input2 = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'}


if p.issubset(input2):
    print("true")
else:
    print("false")



