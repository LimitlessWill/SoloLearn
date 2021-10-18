diagram = input()

mpos = diagram.find('$')
tpos = diagram.find('T')

#sawp if mpos > pos
if tpos >= mpos:
    tpos +=1
else:
    mpos += 1
    tmp = mpos
    mpos = tpos
    tpos = tmp

#get substring between $ and T
action = "quiet" if 'G' in diagram[mpos:tpos] else "ALARM"

print(diagram[mpos:tpos],end="")
