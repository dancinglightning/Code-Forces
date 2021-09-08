def adder(l1, x, t1):
    while len(l1)<=x-t1:
        l1 += [0]
    
    l1[x-t1] = x
    return l1

n = int(input())
l = []
l1 = [0]
out1 = ""
out2 = ""
max1 = 0
t1 = 0
for i in range(n):
    t = input()
    t = t.split()
    l += [int(t[0])]
    l += [int(t[1])]
    if i==0:
        t1 = min(int(t[0]), int(t[1]))
    l1 = adder(l1, int(t[0]), t1)
    l1 = adder(l1, int(t[1]), t1)

while 0 in l1:
    l1.remove(0)
l1 = l1[0:n]
    
for j in range(2*n):
    if (j%2 == 0):
        if 2*((j//2)+1)<=n or (l[j] in l1):
            out1 += "1"
        else:
            out1 += "0"
            
    if (j%2 == 1):
        if 2*((j//2)+1)<=n or (l[j] in l1):
            out2 += "1"
        else:
            out2 += "0"
            
print(out1)
print(out2)