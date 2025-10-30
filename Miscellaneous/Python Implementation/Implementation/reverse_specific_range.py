"""
9. Reverse Specific Range:
--------------------------
"abcdefgh" (index 2-5) → "abedcfgh"
"hello" (index 1-3) → "hlelo"
"programming" (index 3-7) → "promargming"
"""

i, j = map(int, input().split())
s = input()

print(s[:i] + s[i:j][::-1] + s[j:])
