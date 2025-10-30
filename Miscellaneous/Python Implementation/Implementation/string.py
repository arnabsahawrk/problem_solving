"""
str: Immutable sequence of Unicode code points (in CPython encoded internally but behaves as a sequence of characters).
Concatenation creates new strings.

Key operations & average time complexities
-----------------------------------------------------
slicing lst[a:b]: O(k) to create new list of length k

str[i] indexing: O(1)

len(list) / len(str): O(1)

s1 + s2 for strings: O(len(s1) + len(s2)) (creates new string) — repeated concatenation in a loop is O(n²)
in total if done naively. Use ''.join() instead.
"""
