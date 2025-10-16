A, B = map(int, input().split())
S = input()

f = True
if S[A] != '-':
    f = False

for i in range(len(S)):
    if i == A:
        continue
    if not S[i].isdigit():
        f = False

if f:
    print("Yes")
else:
    print("No")