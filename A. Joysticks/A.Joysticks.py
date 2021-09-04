n = input()
n = n.split(" ")
n[0] = int(n[0])
n[1] = int(n[1])
m=0
c = -1
while n[0]>0 and n[1]>0:
    if n[0]==n[1] and n[0]==1:
        break
    elif n[0]<=n[1]:
        c = 0
    else:
        c = 1
    
    n[c]+=1
    n[1-c]-=2
    m+=1
        
print(m)