"""
5. Reverse Last k Characters:
--------------------------------
"abcdef", k=3 → "abcfed"
"hello", k=2 → "helol"
"coding", k=4 → "cognid"
"""

k = int(input())
s = input()

print(s[:-k] + s[-k:][::-1])
