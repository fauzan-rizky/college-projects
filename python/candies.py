A, B, M, X = map(int, input().split())

left = X - B * M
s = A + B

if left <= 0 or left % s != 0:
    print(-1)
else:
    c = left // s
    print(c, c + M)