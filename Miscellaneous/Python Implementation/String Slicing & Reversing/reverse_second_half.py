"""
3. Reverse Second Half:
--------------------------
n=4, k=2, "abcd" → "abdc"
n=5, k=3, "hello" → "heoll"
n=6, k=3 "python" → "pytnoh"
"""

n = int(input())
k = int(input())
s = input()

print(s[:-k] + s[-k:][::-1])
