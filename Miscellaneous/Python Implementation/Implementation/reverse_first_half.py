"""
2. Reverse First Half:
-----------------------
n = 4, k=2, "abcd" → "bacd"
n=5, k=2, "hello" → "ehllo"
n=7, k=4, "program" → "gorpram"
"""

n = int(input())
k = int(input())
s = input()

print(s[:k][::-1] + s[k:])
