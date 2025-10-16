A, B = map(int, input().split())

lucky = []

for x in range(A, B+1):
    f = all(ch in ['4', '7'] for ch in str(x))
    if (f):
        lucky.append(x)

if lucky:
    print(*lucky)
else:
    print(-1)