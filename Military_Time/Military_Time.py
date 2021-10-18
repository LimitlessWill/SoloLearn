tm = input().split()
res = ""
if "PM" in tm:
    y = tm[0].split(":")
    res += str(int(y[0])+12)+":"+y[1]
else:
    res = tm[0]
print(res,end="")
