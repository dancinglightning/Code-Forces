x = input()
x = x.split(" ")
max1 = 0
for i in range(5):
    x[i] = int(x[i])
    if (3>=x.count(x[i])>=2) and (x.count(x[i])*x[i] > max1):
        max1 = x.count(x[i])*x[i]
        
print(sum(x) - max1)