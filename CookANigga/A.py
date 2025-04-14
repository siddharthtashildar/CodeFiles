

word = input()
new_word = ''
for i in word:
    x = ord(i) - 97
    new_word = new_word + chr(122-x)
print(new_word)