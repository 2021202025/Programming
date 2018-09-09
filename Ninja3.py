string = input()
for i in range(len(string)):
    count = 0
    for j in range(len(string)):
        if(string[j] == string[i]):
            count += 1

    print(string[i], count)