#!/bin/python3


# Complete the makeAnagram function below.
def makeAnagram(a, b):
    # count = 0
    # for i in range(97,123):
    #     ia = sum(letter == chr(i) for letter in a)
    #     ib = sum(letter == chr(i) for letter in b)
    #     count += abs(ia-ib)
    #
    # return count

    for i in a:
        if i in b:
            b = b.replace(i, '', 1)
            a = a.replace(i, '', 1)
    return len(a) + len(b)


a = input()
b = input()


print(makeAnagram(a, b))