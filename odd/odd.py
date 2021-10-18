number = int(input())
sum = 0
for x in range(number):
    number = int(input())
    sum += number if (number % 2) == 0 else 0

print(sum,end="")
