word = input()
splist = "!@#$%&*"
eval = ""
num = 0
sp = 0

for x in word:
    if x.isdigit():
        num += 1
    elif x in splist:
        sp += 1
        
if num < 2 or sp < 2 or len(word) < 7:
    eval = "Weak"
else:
    eval = "Strong"
    
print(eval,end="")
