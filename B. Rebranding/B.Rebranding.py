def get_key(val):
    for key, value in d.items():
         if val == value:
             return key

x = input()
x = x.split(" ")
n = int(x[0])
m = int(x[1])
s = input()
d={}
for i in range(n):
    d[s[i]] = s[i]
    
for j in range(m):
    t = input()
    t = t.split(" ")
    if t[0] not in d.keys():
        d[t[0]] = t[0]
    if t[1] not in d.keys():
        d[t[1]] = t[1]
    d[t[0]], d[t[1]] = d[t[1]], d[t[0]]

for k in range(n):
    print(get_key(s[k]), end="")
