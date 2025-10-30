"""
7. Swap First and Last:
-------------------------
"abcd" → "dbca"
"hello" → "oellh"
"python" → "nythop"
"""

s = input()

print(s[-1] + s[1:-1] + s[0])
