name = input()
agent = int(input())

"""only 4 names , sort them by first letter along with name (concat the sort list)
"""
others = sorted(input().split()+[name])

#the order of name in a list (position)
ordinal = others.index(name)+1

#time would take till making new license
time = int((ordinal-1)/agent)*20+20

print(time,end="")
