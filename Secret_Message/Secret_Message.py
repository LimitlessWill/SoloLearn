msg = input().lower()
de = []
for x in msg:
    if x.isalpha():
       de += chr((122-ord(x))+97)
    else:
       de += x
    

print("".join(de),end="")
