"""
SORTING AND ALGORITHMS
=======================
- Built-in sort functions
- Custom sorting
- Key algorithms
"""

# SORT LIST IN-PLACE
lst = [3, 1, 4, 1, 5, 9, 2, 6]
lst.sort()  # O(n log n) - ascending (like sort(v.begin(), v.end()))
lst.sort(reverse=True)  # O(n log n) - descending

# SORTED - RETURN NEW SORTED LIST (ORIGINAL UNCHANGED)
lst = [3, 1, 4, 1, 5, 9, 2, 6]
sorted_lst = sorted(lst)  # O(n log n) - original unchanged
sorted_desc = sorted(lst, reverse=True)

# CUSTOM SORTING WITH KEY

# Sort by absolute value
lst = [-4, -2, 1, 3, -5]
lst.sort(key=abs)  # [1, -2, 3, -4, -5]

# Sort by length
words = ["apple", "pie", "a", "cherry"]
words.sort(key=len)  # ['a', 'pie', 'apple', 'cherry']

# Sort by custom function
lst = ["apple", "Banana", "cherry"]
lst.sort(key=str.lower)  # case-insensitive sort

# Sort by multiple criteria (tuple comparison)
students = [("Alice", 25), ("Bob", 20), ("Charlie", 25)]
students.sort(key=lambda x: (x[1], x[0]))  # by age, then name
# [('Bob', 20), ('Alice', 25), ('Charlie', 25)]

# Sort by multiple criteria with different orders
students.sort(key=lambda x: (x[1], -ord(x[0][0])))  # age asc, name desc

# Sort dict by value
dct = {"a": 3, "b": 1, "c": 2}
sorted_items = sorted(dct.items(), key=lambda x: x[1])
# [('b', 1), ('c', 2), ('a', 3)]

# Sort dict by key
sorted_by_key = sorted(dct.items())  # [('a', 3), ('b', 1), ('c', 2)]

# Sort list of dicts
students = [
    {"name": "Alice", "score": 85},
    {"name": "Bob", "score": 90},
    {"name": "Charlie", "score": 85}
]
students.sort(key=lambda x: (-x["score"], x["name"]))  # score desc, name asc

# REVERSE
lst = [1, 2, 3, 4, 5]
lst.reverse()  # O(n) - reverse in-place → [5, 4, 3, 2, 1]
reversed_lst = list(reversed(lst))  # O(n) - return new reversed
reversed_lst = lst[::-1]  # O(n) - slice notation

# MIN/MAX
lst = [3, 1, 4, 1, 5, 9, 2, 6]
minimum = min(lst)  # O(n) - like *min_element()
maximum = max(lst)  # O(n) - like *max_element()

# With custom key
words = ["apple", "pie", "a", "cherry"]
longest = max(words, key=len)  # "cherry"
shortest = min(words, key=len)  # "a"

# Min/max of multiple arguments
result = min(5, 10, 3, 8)  # 3
result = max(5, 10, 3, 8)  # 10

# SUM
total = sum(lst)  # O(n) - sum of all elements
total = sum(lst, 10)  # O(n) - sum with initial value 10

# ANY/ALL
lst = [True, False, True]
if any(lst):  # True - at least one True
    print("At least one True")
if all(lst):  # False - not all True
    print("All True")

# Check if any element is even
nums = [1, 3, 5, 8, 9]
has_even = any(x % 2 == 0 for x in nums)  # True

# Check if all elements are positive
all_positive = all(x > 0 for x in nums)  # True

# FILTER (RETURN FILTERED ELEMENTS)
lst = [1, 2, 3, 4, 5]
evens = list(filter(lambda x: x % 2 == 0, lst))  # [2, 4]

# MAP (APPLY FUNCTION TO ALL ELEMENTS)
squares = list(map(lambda x: x**2, lst))  # [1, 4, 9, 16, 25]
strings = list(map(str, lst))  # ['1', '2', '3', '4', '5']

# ZIP (COMBINE MULTIPLE ITERABLES)
names = ["Alice", "Bob", "Charlie"]
scores = [85, 90, 75]
combined = list(zip(names, scores))  # [('Alice', 85), ('Bob', 90), ('Charlie', 75)]

# Unzip
names, scores = zip(*combined)

# ENUMERATE (INDEX WITH VALUE)
lst = ['a', 'b', 'c']
for i, val in enumerate(lst):
    print(f"{i}: {val}")

for i, val in enumerate(lst, start=1):  # start from 1
    print(f"{i}: {val}")

# RANGE
for i in range(5):  # 0, 1, 2, 3, 4
    print(i)

for i in range(2, 5):  # 2, 3, 4
    print(i)

for i in range(0, 10, 2):  # 0, 2, 4, 6, 8
    print(i)

for i in range(5, 0, -1):  # 5, 4, 3, 2, 1
    print(i)

# TIME COMPLEXITY
"""
sort/sorted: O(n log n) - Timsort algorithm
reverse: O(n)
min/max: O(n)
sum: O(n)
filter/map: O(n)
"""