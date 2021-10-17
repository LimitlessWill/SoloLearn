sales = int(input()) * 3
res = ""
if sales < 21 :
    res = 'Loss'
elif sales > 21 :
    res = "Profit"
else:
    res = "Broke Even"
print(res,end="")
