i=0
a=[]
b=[]
print("enter 5 number:")
while i<5:
    x=int(input("enter num:"))
    a.append(x)
    i=i+1

print("enter 5 number:")
i=0
while i<5:
    x=int(input("enter num:"))
    b.append(x)
    i=i+1



c=[]
for i in range(len(a)):
    for j in range(len(b)):
        if a[i]==b[j]:
            c.append(a[i])
        j = j+1
    i=i+1

print("These lists have ",len(c)," items common")
print("These items are ",c)

    





