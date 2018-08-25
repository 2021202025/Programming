from random import shuffle

def jumble(word):
    anagram = list(word)
    shuffle(anagram)
    return ''.join(anagram)


words = ['Shelby GT350R', 'BMW E36 M3', 'Nissan Skyline R34 GTR']
anagrams = []

'''for word in words:
anagrams.append(jumble(word))

print(anagrams)
'''

#map(function, data)
print(list(map(jumble, words)))


print(list(jumble(word) for word in words))