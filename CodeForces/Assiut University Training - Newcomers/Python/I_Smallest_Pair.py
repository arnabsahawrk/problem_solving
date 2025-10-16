t = int(input())

for _ in range(t):
    n = int(input())
    arr = list(map(int, input().split()))
    mn = float('inf')
    for i in range(n-1):
        for j in range(i+1, n):
            mn = min(mn, (arr[i]+arr[j]+((j+1) - (i+1))))
    print(mn)