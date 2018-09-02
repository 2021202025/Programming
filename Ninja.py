string = input()
slist = list(string)
result = []

vowels = ['a','e','i','o','u','A','E','I','O','U']

for i in range(len(slist)):
    if slist[i] in vowels:
        result.append('$')
    else:
        result.append('#')


print(''.join(result))
