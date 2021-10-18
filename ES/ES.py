months = {"January":"1","February":"2","March":"3","April":"4","May":"5","June":"6","July":"7","August":"8","September":"9","October":"10","November":"11","December":"12"}
us = input()
eu =""
month = ""
day = ""
year = ""
if us[0].isalpha():
    spit = us.split()
    month = months[spit[0]]
    day = spit[1][:-1]
    year = spit[2]
else:
    spit = us.split("/")
    month = spit[0]
    day = spit[1]
    year = spit[2]
    
print(f"{day}/{month}/{year}",end="")
