string1 = str(input())
n = int(string1.split(" ")[0])
m = int(string1.split(" ")[1])
d = {}
for item in range(m):
    string2 = str(input())
    a = string2.split(" ")[0]
    b = string2.split(" ")[1]
    if len(a)<=len(b):
        d[a]=a
    else:
        d[a]=b
c = str(input())
c = c.split(" ")
for i in range(n):
    print(d[c[i]],end=" ")
    