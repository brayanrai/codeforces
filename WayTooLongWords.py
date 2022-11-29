n=int(input(""))
list1=[]
for i in range(n):
    s=input("")
    list1.append(s)
    
for i in range(n):
    s=list1[i]
    length= len(s)
    if(length>10 and s != 4):
        first=str(s[0])
        last=s[length-1]
        a= str(length-2)
        print(first+a+last)
    else:
        print(s)
