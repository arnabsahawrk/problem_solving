n = int(input())
s = list(map(int, input().split()))

if s == s[::-1]:
    print("YES")
else:
    print("NO")
