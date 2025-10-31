"""
COMMON PITFALLS & BEST PRACTICES
=================================
Important things to know when switching from C++ to Python
"""

# =============================================================================
# PITFALL 1: MUTABLE DEFAULT ARGUMENTS
# =============================================================================

# WRONG - Same list is reused across calls!
def add_item_wrong(item, lst=[]):
    lst.append(item)
    return lst

# a = add_item_wrong(1)  # [1]
# b = add_item_wrong(2)  # [1, 2] - BUG! Should be [2]

# CORRECT
def add_item(item, lst=None):
    if lst is None:
        lst = []
    lst.append(item)
    return lst

# =============================================================================
# PITFALL 2: SHALLOW COPY VS DEEP COPY
# =============================================================================

# Shallow copy - nested lists are shared!
lst1 = [[1, 2], [3, 4]]
lst2 = lst1.copy()  # or lst1[:]
lst2[0][0] = 999  # Modifies lst1 too! Both share nested list

# Deep copy - completely independent
import copy
lst1 = [[1, 2], [3, 4]]
lst2 = copy.deepcopy(lst1)
lst2[0][0] = 999  # Only modifies lst2

# =============================================================================
# PITFALL 3: INTEGER DIVISION
# =============================================================================

# Python 3 behavior
result = 5 / 2  # 2.5 (float division)
result = 5 // 2  # 2 (integer division - floors)
result = -5 // 2  # -3 (floors toward negative infinity, not zero!)

# For C++-like division (truncate toward zero)
result = int(-5 / 2)  # -2

# =============================================================================
# PITFALL 4: MODIFYING LIST WHILE ITERATING
# =============================================================================

# WRONG - Skips elements!
lst = [1, 2, 3, 4, 5]
for item in lst:
    if item % 2 == 0:
        lst.remove(item)  # BUG!

# CORRECT - List comprehension
lst = [item for item in lst if item % 2 != 0]

# OR iterate over copy
for item in lst[:]:
    if item % 2 == 0:
        lst.remove(item)

# =============================================================================
# PITFALL 5: USING 'is' INSTEAD OF '=='
# =============================================================================

# 'is' checks identity (same object in memory)
# '==' checks equality (same value)

a = [1, 2, 3]
b = [1, 2, 3]
print(a == b)  # True (same value)
print(a is b)  # False (different objects)

# For small integers, Python caches them
a = 5
b = 5
print(a is b)  # True (cached)

a = 257
b = 257
print(a is b)  # False (not cached)

# ALWAYS use == for value comparison, is for None checks
if x is None:  # CORRECT
    pass
if x == None:  # WORKS but not recommended
    pass

# =============================================================================
# PITFALL 6: VARIABLE SCOPE IN LOOPS
# =============================================================================

# Variables in loops remain in scope after loop ends
for i in range(5):
    x = i
print(x)  # 4 - still accessible (unlike C++)

# =============================================================================
# PITFALL 7: LIST MULTIPLICATION
# =============================================================================

# WRONG - Creates shallow copies!
matrix = [[0] * 3] * 3
matrix[0][0] = 1
# All rows are same object, so all get modified!
# [[1, 0, 0], [1, 0, 0], [1, 0, 0]]

# CORRECT
matrix = [[0] * 3 for _ in range(3)]
matrix[0][0] = 1
# [[1, 0, 0], [0, 0, 0], [0, 0, 0]]

# =============================================================================
# PITFALL 8: MODULO WITH NEGATIVE NUMBERS
# =============================================================================

# Python modulo always returns non-negative result
print(-5 % 3)  # 1 (in Python)
# C++: -5 % 3 = -2

# For C++-like behavior
def cpp_mod(a, b):
    return a % b if a * b > 0 else a % b - b if a % b != 0 else 0

# =============================================================================
# PITFALL 9: DICT KEY ORDER
# =============================================================================

# Python 3.7+ dicts maintain insertion order
# But don't rely on this for sorting!

dct = {3: 'three', 1: 'one', 2: 'two'}
# Maintains insertion order, NOT sorted by key

# To iterate in sorted order
for key in sorted(dct):
    print(key, dct[key])

# =============================================================================
# PITFALL 10: FUNCTION ARGUMENT PASSING
# =============================================================================

# Immutable objects (int, str, tuple) - pass by value
def modify_int(x):
    x += 1  # Creates new object, doesn't modify original
    
a = 5
modify_int(a)
print(a)  # 5 - unchanged

# Mutable objects (list, dict, set) - pass by reference
def modify_list(lst):
    lst.append(1)  # Modifies original!
    
lst = []
modify_list(lst)
print(lst)  # [1] - modified

# =============================================================================
# BEST PRACTICES
# =============================================================================

"""
1. USE LIST COMPREHENSIONS
   Instead of: 
       result = []
       for x in lst:
           if x > 0:
               result.append(x)
   Use:
       result = [x for x in lst if x > 0]

2. USE ENUMERATE INSTEAD OF range(len())
   Instead of:
       for i in range(len(lst)):
           print(i, lst[i])
   Use:
       for i, val in enumerate(lst):
           print(i, val)

3. USE 'in' FOR MEMBERSHIP TESTING
   Instead of:
       if lst.count(x) > 0:
   Use:
       if x in lst:

4. USE defaultdict TO AVOID KeyError
   Instead of:
       if key not in dct:
           dct[key] = []
       dct[key].append(val)
   Use:
       from collections import defaultdict
       dct = defaultdict(list)
       dct[key].append(val)

5. USE Counter FOR FREQUENCY COUNTING
   Instead of:
       freq = {}
       for x in lst:
           freq[x] = freq.get(x, 0) + 1
   Use:
       from collections import Counter
       freq = Counter(lst)

6. USE SET FOR O(1) LOOKUP
   Instead of:
       if x in lst:  # O(n)
   Use:
       s = set(lst)
       if x in s:  # O(1)

7. USE GENERATORS FOR LARGE SEQUENCES
   Instead of:
       lst = [x**2 for x in range(10**6)]  # Creates list in memory
   Use:
       gen = (x**2 for x in range(10**6))  # Generator, memory efficient

8. USE TUPLE FOR IMMUTABLE SEQUENCES
   If data shouldn't change, use tuple instead of list

9. USE f-strings FOR STRING FORMATTING (Python 3.6+)
   Instead of:
       s = "Name: " + name + ", Age: " + str(age)
   Use:
       s = f"Name: {name}, Age: {age}"

10. USE 'with' FOR FILE OPERATIONS
    Instead of:
        f = open("file.txt")
        data = f.read()
        f.close()
    Use:
        with open("file.txt") as f:
            data = f.read()

11. USE any() AND all() FOR BOOLEAN CHECKS
    Instead of:
        has_positive = False
        for x in lst:
            if x > 0:
                has_positive = True
                break
    Use:
        has_positive = any(x > 0 for x in lst)

12. USE zip() TO ITERATE MULTIPLE LISTS
    Instead of:
        for i in range(len(names)):
            print(names[i], scores[i])
    Use:
        for name, score in zip(names, scores):
            print(name, score)

13. CHAIN COMPARISONS
    Instead of:
        if x > 0 and x < 10:
    Use:
        if 0 < x < 10:

14. USE UNPACKING
    Instead of:
        first = lst[0]
        second = lst[1]
    Use:
        first, second = lst[:2]
        # OR
        first, second, *rest = lst

15. USE get() FOR DICT WITH DEFAULT
    Instead of:
        if key in dct:
            val = dct[key]
        else:
            val = default
    Use:
        val = dct.get(key, default)
"""

# =============================================================================
# PERFORMANCE TIPS
# =============================================================================

"""
1. String concatenation in loops - use join()
   BAD:  result = ""; for s in lst: result += s  # O(n²)
   GOOD: result = "".join(lst)  # O(n)

2. Check if list is empty - use truthiness
   BAD:  if len(lst) == 0:
   GOOD: if not lst:

3. Reverse iteration - use reversed() or [::-1]
   BAD:  for i in range(len(lst)-1, -1, -1): print(lst[i])
   GOOD: for item in reversed(lst): print(item)

4. Remove duplicates maintaining order
   BAD:  unique = list(set(lst))  # loses order
   GOOD: unique = list(dict.fromkeys(lst))  # maintains order

5. Multiple conditions - use tuple
   if x in (1, 2, 3, 4, 5):  # Better than x==1 or x==2 or ...

6. Swapping values - use tuple unpacking
   BAD:  temp = a; a = b; b = temp
   GOOD: a, b = b, a

7. Floor division for integer division
   BAD:  int(a / b)
   GOOD: a // b

8. Exponentiation
   BAD:  math.pow(a, b)
   GOOD: a ** b
"""