x = int(input())
n = input()
n = n.split(" ")
for i in range(0, x//2, 2):        
    n[i], n[x-i-1] = n[x-i-1], n[i]

for j in range(x):
    print(n[j], end = " ")
