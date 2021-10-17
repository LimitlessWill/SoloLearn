sentence = input().split()
latin = ""
for word in sentence:
    latin += word[1:] + word[0]+"ay "
print(latin,end="")
