n = input()
n = n.split(" ")
l1 = int(n[0])
x = int(n[1])
a = input()
a = a.split(" ")
a = a[-1::-1]

n = input()
n = n.split(" ")
l2 = int(n[0])
y = int(n[1])
b = input()
b = b.split(" ")
b = b[-1::-1]

num1 = 0
num2 = 0

for i in range(l1):
    num1+=int(a[i])*(pow(x, i))
    
for j in range(l2):
    num2+=int(b[j])*(pow(y, j))
    
if (num1>num2):
    print(">")
    
elif (num1<num2):
    print("<")
    
else:
    print("=")