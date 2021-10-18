url = input()
id = ""
if url.find("e/") > 0:
    id = url[url.find("e/")+2:]
elif url.find("v=") >0:
    id = url[url.find("v=")+2:]
print(id,end="")
