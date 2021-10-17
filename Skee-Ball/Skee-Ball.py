score = int(input())
prize = int(input())

print("Buy it!" if (score / 12) >= prize else "Try again",end="")
