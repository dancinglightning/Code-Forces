n = input()
n = n.split(" ")
l = input()
l = l.split(" ")
i = int(n[1])-1
low  = i
high = i
count = 0
    
while high<=int(n[0])-1 and low>=0:
    if int(l[low])+int(l[high])==1:
        count+=1
        
    high+=1
    low-=1
    
summer = 0
for i in range(len(l)):
    summer += int(l[i])

print(summer - count)