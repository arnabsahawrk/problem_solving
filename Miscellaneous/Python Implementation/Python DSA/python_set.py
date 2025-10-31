"""
SET - Unordered Unique Elements (C++ unordered_set equivalent)
================================================================
- Unordered, mutable, NO duplicates
- Implemented as hash table
- Average O(1) operations
- Like C++ unordered_set (not sorted like C++ set)
"""

# CREATION
st = set()  # empty set
st = {1, 2, 3, 4, 5}  # initialized set
# Note: {} creates empty dict, not set!
st = set([1, 2, 2, 3, 3, 4])  # {1, 2, 3, 4} - duplicates removed

# ADDING ELEMENTS
st.add(6)  # O(1) average - like insert()
st.update([7, 8, 9])  # O(k) - add multiple elements
st.update({10, 11})  # can add from another set

# REMOVING ELEMENTS
st.remove(3)  # O(1) average - raises KeyError if not found
st.discard(3)  # O(1) average - no error if not found (safer)
st.pop()  # O(1) - remove and return arbitrary element
st.clear()  # O(n) - remove all elements

# OPERATIONS
if 3 in st:  # O(1) average - like find() != end()
    print("Found")

length = len(st)  # O(1) - like size()

# SET OPERATIONS (VERY POWERFUL)
a = {1, 2, 3, 4}
b = {3, 4, 5, 6}

# Union (all elements from both sets)
union = a | b  # {1, 2, 3, 4, 5, 6}
union = a.union(b)

# Intersection (common elements)
intersection = a & b  # {3, 4}
intersection = a.intersection(b)

# Difference (elements in a but not in b)
difference = a - b  # {1, 2}
difference = a.difference(b)

# Symmetric Difference (elements in either but not both)
sym_diff = a ^ b  # {1, 2, 5, 6}
sym_diff = a.symmetric_difference(b)

# SUBSET/SUPERSET
is_subset = a.issubset(b)  # False - is a subset of b?
is_superset = a.issuperset(b)  # False - is a superset of b?
is_disjoint = a.isdisjoint(b)  # False - no common elements?

# IN-PLACE OPERATIONS
a |= b  # a = a | b (union update)
a &= b  # a = a & b (intersection update)
a -= b  # a = a - b (difference update)
a ^= b  # a = a ^ b (symmetric difference update)

# ITERATION
for item in st:
    print(item)  # order not guaranteed

# CONVERTING
lst = [1, 2, 2, 3, 3, 4]
unique = list(set(lst))  # remove duplicates

# FROZEN SET (IMMUTABLE SET)
fs = frozenset([1, 2, 3])  # immutable set
# Can be used as dict keys or in other sets
# fs.add(4)  # ERROR! Immutable

# TIME COMPLEXITY SUMMARY
"""
Add: O(1) average, O(n) worst
Remove: O(1) average, O(n) worst
Search: O(1) average, O(n) worst
Union: O(len(a) + len(b))
Intersection: O(min(len(a), len(b)))
Like C++ unordered_set
"""

# NOTE: For sorted set, use sorted(st) or SortedSet from sortedcontainers library