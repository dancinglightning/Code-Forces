a = int(input())
n = input()
n = n.split(" ")
maxi = 1
mini = a
max_pos = -1
min_pos = -1
for i in range(a):
    n[i] = int(n[i])
    if n[i]>maxi:
        maxi = n[i]
        max_pos = i
    if n[i]<mini:
        mini = n[i]
        min_pos = i
print(max([max_pos, min_pos, a-min_pos-1, a-max_pos-1]))
