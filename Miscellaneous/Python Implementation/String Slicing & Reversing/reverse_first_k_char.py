"""
4. Reverse First k Characters:
---------------------------------
"abcdef", k=3 → "cbadef"
"hello", k=2 → "ehllo"
"programming", k=5 → "rgorpamming"
"""

k = int(input())
s = input()

print(s[:k][::-1] + s[k:])
