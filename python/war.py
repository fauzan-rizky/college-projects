a = int(input())
b = list(map(int, input().split()))

while len(b) > 2:
    c = []
    b.sort()
    for i in range(len(b)//2):
        c.append(b[i]+b[-(i+1)])
    c.sort()
    b = c

print(*b)