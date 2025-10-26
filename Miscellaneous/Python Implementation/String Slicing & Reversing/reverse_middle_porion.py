"""
6. Reverse Middle Portion:
------------------------------
"hello" (skip first & last) → "hlleo"
"abcdef" (skip first & last) → "aedcbf"
"python" (skip first & last) → "pohtyn"
"programming" (skip first & last) → "pnimmargorg"
"""

s = input()
print(s[:1] + s[1:-1][::-1] + s[-1:])
