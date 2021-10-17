msg = input()
re = [each for each in msg if each.isalpha() or each.isdigit() or each == ' ']
print("".join(re),end="")
