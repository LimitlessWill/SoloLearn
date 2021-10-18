import math
words = input()
letters = 0
res = ""
for word in words:
    if word.isalpha():
        letters += 1
        res += word
#words.count(" ")+1 is the count of words
avg = letters / (words.count(" ")+1)
print(math.ceil(avg),end="")
