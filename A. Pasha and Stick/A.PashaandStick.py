n = int(input())
if n%2 == 0:
    n = n/2
    print(int(n//2 + n%2 - 1))
else:
    print("0")
