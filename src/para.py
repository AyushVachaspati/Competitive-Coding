x = ""
with open("para.txt","r") as f:
    for i in f:
        x+=i[:-1]
        x+=" "
print x
