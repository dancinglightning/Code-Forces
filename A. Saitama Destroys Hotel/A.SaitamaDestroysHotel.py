n = input()
n = n.split(" ")
passengers = int(n[0])
floors = int(n[1])
ans = floors
for i in range(passengers):
    m = input()
    m = m.split(" ")
    ans = max(ans, int(m[0])+int(m[1]))
        
print(ans)