n = int(input())
for i in range(n):
    x1 = int(input())
    x = input()
    x = x.replace("D", "?").replace("U", "D").replace("?", "U")
    print(x)