msg = input()[::-1]
de = [each for each in msg if each.isalpha() or each == ' ']
print("".join(de),end="")
