N = int(input())
a = list(map(int, input().split()))
dic = {}

for x in a:
    if x in dic:
        dic[x] += 1
    else:
        dic[x] = 1

ans = 0
for key, val in dic.items():
    if key != val:
        if key > val:
            ans += val
        else:
            ans += val - key

print(ans)
