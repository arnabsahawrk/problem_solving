N = int(input())
A = list(map(int, input().split()))

count = 0

while True:
    f = False
    for i in range(N):
        if A[i] & 1:
            f = True
            break
        else:
            A[i] //= 2
    if f:
        break
    else:
        count += 1

print(count)
