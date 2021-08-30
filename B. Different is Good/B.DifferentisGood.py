n = int(input())
s = input()
l = []
count = 0
for i in range(0,n):
    if s[i] in l:
        count += 1
    else:
        l += [s[i]]
if len(l) + count <= 26:
    print(count)
else:
    print(-1)