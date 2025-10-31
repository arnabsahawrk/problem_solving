"""
TUPLE - Immutable Sequence
===========================
- Ordered, immutable, allows duplicates
- Faster than list (immutable)
- Used for fixed data
- Like const vector in C++
"""

# CREATION
tup = ()  # empty tuple
tup = (1, 2, 3, 4, 5)
tup = 1, 2, 3  # parentheses optional
single = (1,)  # single element tuple (note the comma)

# ACCESSING
first = tup[0]  # O(1)
last = tup[-1]  # O(1)

# SLICING (SAME AS LIST)
sub = tup[1:4]  # (2, 3, 4)
sub = tup[::-1]  # reverse

# UNPACKING
a, b, c = (1, 2, 3)  # a=1, b=2, c=3
first, *rest = (1, 2, 3, 4)  # first=1, rest=[2, 3, 4]
first, *middle, last = (1, 2, 3, 4, 5)  # first=1, middle=[2,3,4], last=5

# OPERATIONS
length = len(tup)  # O(1)
count = tup.count(2)  # O(n)
index = tup.index(3)  # O(n)

# CHECKING
if 3 in tup:  # O(n)
    print("Found")

# ITERATION
for item in tup:
    print(item)

# IMMUTABLE - CANNOT MODIFY
# tup[0] = 10  # ERROR! TypeError
# tup.append(6)  # ERROR! No such method

# CONCATENATION (CREATES NEW TUPLE)
tup1 = (1, 2, 3)
tup2 = (4, 5, 6)
combined = tup1 + tup2  # (1, 2, 3, 4, 5, 6)

# REPETITION
repeated = (1, 2) * 3  # (1, 2, 1, 2, 1, 2)

# NESTED TUPLES
nested = ((1, 2), (3, 4), (5, 6))

# USE CASES
# - Return multiple values from function
def get_coordinates():
    return (10, 20)  # return tuple

x, y = get_coordinates()  # unpack

# - Dictionary keys (lists can't be keys)
locations = {(0, 0): "origin", (1, 1): "diagonal"}

# - Fixed configuration data
CONFIG = ("localhost", 8080, "admin")

# TIME COMPLEXITY
"""
Access: O(1)
Search: O(n)
Cannot modify (immutable)
"""