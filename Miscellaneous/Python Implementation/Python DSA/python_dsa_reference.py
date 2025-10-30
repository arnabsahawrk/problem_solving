# =============================================================================
# PYTHON DSA REFERENCE - COMPLETE GUIDE
# =============================================================================
# Structure similar to C++ STL for easy reference
# Author: Arnab Saha
# Purpose: Quick reference when switching from C++ to Python
# =============================================================================

"""
PYTHON BUILT-IN DATA STRUCTURES OVERVIEW
=========================================

Python doesn't have STL like C++, but has powerful built-in data structures:

1. LIST (like vector in C++)
2. TUPLE (immutable list)
3. SET (like set in C++)
4. DICT (like map in C++)
5. DEQUE (from collections - like deque in C++)
6. HEAPQ (Priority Queue implementation)
7. COUNTER (from collections - frequency map)
8. DEFAULTDICT (from collections - map with default values)

Additional modules:
- collections: deque, Counter, defaultdict, OrderedDict
- heapq: Priority Queue operations
- bisect: Binary search operations
- itertools: Permutations, combinations

Time Complexities:
------------------
List: append O(1), insert O(n), delete O(n), access O(1)
Set: add O(1), remove O(1), lookup O(1)
Dict: insert O(1), delete O(1), lookup O(1)
Deque: append/pop from both ends O(1)
Heap: push O(log n), pop O(log n)
"""

# =============================================================================
# FILE 1: LIST (EQUIVALENT TO C++ VECTOR)
# =============================================================================

"""
LIST - Dynamic Array (C++ vector equivalent)
============================================
- Ordered, mutable, allows duplicates
- Implemented as dynamic array
- Index-based access O(1)
"""

# CREATION
lst = []  # empty list
lst = [1, 2, 3, 4, 5]  # initialized list
lst = list(range(5))  # [0, 1, 2, 3, 4]
lst = [0] * 5  # [0, 0, 0, 0, 0] - like vector<int> v(5, 0)

# ADDING ELEMENTS
lst.append(6)  # O(1) - like push_back()
lst.insert(0, 100)  # O(n) - insert at index 0
lst.extend([7, 8, 9])  # O(k) - add multiple elements

# ACCESSING ELEMENTS
first = lst[0]  # O(1) - like lst[0] or lst.at(0)
last = lst[-1]  # O(1) - Python negative indexing (no back() method)
element = lst[2]  # O(1)

# REMOVING ELEMENTS
lst.pop()  # O(1) - remove and return last element (like pop_back())
lst.pop(0)  # O(n) - remove element at index 0
lst.remove(100)  # O(n) - remove first occurrence of value
del lst[1]  # O(n) - delete element at index 1
lst.clear()  # O(n) - remove all elements

# SLICING (VERY POWERFUL IN PYTHON)
lst = [1, 2, 3, 4, 5]
sub = lst[1:4]  # [2, 3, 4] - elements from index 1 to 3
sub = lst[:3]  # [1, 2, 3] - first 3 elements
sub = lst[2:]  # [3, 4, 5] - from index 2 to end
sub = lst[::2]  # [1, 3, 5] - every 2nd element
sub = lst[::-1]  # [5, 4, 3, 2, 1] - reverse list

# USEFUL OPERATIONS
lst.reverse()  # O(n) - reverse in-place
lst.sort()  # O(n log n) - sort in-place
lst.sort(reverse=True)  # O(n log n) - descending order
sorted_lst = sorted(lst)  # O(n log n) - return new sorted list

length = len(lst)  # O(1) - like size()
count = lst.count(3)  # O(n) - count occurrences
index = lst.index(3)  # O(n) - find first index of value

# CHECKING
if 3 in lst:  # O(n) - membership test
    print("Found")

# ITERATION
for item in lst:  # like for(auto x : v)
    print(item)

for i, item in enumerate(lst):  # with index
    print(f"{i}: {item}")

# LIST COMPREHENSION (POWERFUL FEATURE)
squares = [x**2 for x in range(10)]  # [0, 1, 4, 9, 16, 25, 36, 49, 64, 81]
evens = [x for x in range(10) if x % 2 == 0]  # [0, 2, 4, 6, 8]

# TIME COMPLEXITY SUMMARY
# Access: O(1)
# Append: O(1)
# Insert at beginning: O(n)
# Delete: O(n)
# Search: O(n)
# Sort: O(n log n)

# =============================================================================
# FILE 2: TUPLE (IMMUTABLE LIST)
# =============================================================================

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

# UNPACKING
a, b, c = (1, 2, 3)  # a=1, b=2, c=3
first, *rest = (1, 2, 3, 4)  # first=1, rest=[2, 3, 4]

# OPERATIONS
length = len(tup)  # O(1)
count = tup.count(2)  # O(n)
index = tup.index(3)  # O(n)

# IMMUTABLE - CANNOT MODIFY
# tup[0] = 10  # ERROR!
# tup.append(6)  # ERROR!

# USE CASES
# - Return multiple values from function
# - Dictionary keys (lists can't be keys)
# - Fixed configuration data

# TIME COMPLEXITY
# Access: O(1)
# Search: O(n)
# Cannot modify (immutable)

# =============================================================================
# FILE 3: SET (EQUIVALENT TO C++ SET/UNORDERED_SET)
# =============================================================================

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
st = set([1, 2, 2, 3, 3, 4])  # {1, 2, 3, 4} - duplicates removed

# ADDING ELEMENTS
st.add(6)  # O(1) average - like insert()
st.update([7, 8, 9])  # O(k) - add multiple elements

# REMOVING ELEMENTS
st.remove(3)  # O(1) average - raises error if not found
st.discard(3)  # O(1) average - no error if not found
st.pop()  # O(1) - remove and return arbitrary element
st.clear()  # O(n) - remove all elements

# OPERATIONS
if 3 in st:  # O(1) average - like find() != end()
    print("Found")

length = len(st)  # O(1) - like size()

# SET OPERATIONS (VERY POWERFUL)
a = {1, 2, 3, 4}
b = {3, 4, 5, 6}

union = a | b  # {1, 2, 3, 4, 5, 6}
intersection = a & b  # {3, 4}
difference = a - b  # {1, 2} - elements in a but not in b
sym_diff = a ^ b  # {1, 2, 5, 6} - elements in either but not both

# METHODS
union = a.union(b)
intersection = a.intersection(b)
difference = a.difference(b)

# SUBSET/SUPERSET
a.issubset(b)  # False
a.issuperset(b)  # False

# ITERATION
for item in st:
    print(item)  # order not guaranteed

# TIME COMPLEXITY SUMMARY
# Add: O(1) average, O(n) worst
# Remove: O(1) average, O(n) worst
# Search: O(1) average, O(n) worst
# Like C++ unordered_set

# NOTE: For sorted set, use sorted(st) or SortedSet from sortedcontainers library

# =============================================================================
# FILE 4: DICTIONARY (EQUIVALENT TO C++ MAP/UNORDERED_MAP)
# =============================================================================

"""
DICT - Key-Value Pairs (C++ unordered_map equivalent)
======================================================
- Unordered (Python 3.7+ maintains insertion order)
- Mutable, keys must be immutable (hashable)
- Average O(1) operations
- Like C++ unordered_map
"""

# CREATION
dct = {}  # empty dict
dct = {"name": "Arnab", "age": 26}  # initialized
dct = dict(name="Arnab", age=26)  # alternative
dct = dict([("a", 1), ("b", 2)])  # from list of tuples

# ADDING/UPDATING
dct["city"] = "Dhaka"  # O(1) - like map[key] = value
dct.update({"country": "Bangladesh"})  # O(k) - add multiple

# ACCESSING
name = dct["name"]  # O(1) - raises KeyError if not found
name = dct.get("name")  # O(1) - returns None if not found
name = dct.get("name", "Default")  # O(1) - with default value

# REMOVING
del dct["age"]  # O(1) - delete key
value = dct.pop("city")  # O(1) - remove and return value
dct.clear()  # O(n) - remove all

# CHECKING
if "name" in dct:  # O(1) - like find() != end()
    print("Key exists")

# GETTING KEYS, VALUES, ITEMS
keys = dct.keys()  # dict_keys(['name', 'age'])
values = dct.values()  # dict_values(['Arnab', 26])
items = dct.items()  # dict_items([('name', 'Arnab'), ('age', 26)])

# ITERATION
for key in dct:  # iterate over keys
    print(key, dct[key])

for key, value in dct.items():  # iterate over key-value pairs
    print(f"{key}: {value}")

for value in dct.values():  # iterate over values
    print(value)

# DICTIONARY COMPREHENSION
squares = {x: x**2 for x in range(5)}  # {0: 0, 1: 1, 2: 4, 3: 9, 4: 16}

# NESTED DICTIONARIES
student = {
    "name": "Arnab",
    "grades": {"math": 90, "science": 85}
}

# TIME COMPLEXITY SUMMARY
# Access: O(1) average, O(n) worst
# Insert: O(1) average, O(n) worst
# Delete: O(1) average, O(n) worst
# Like C++ unordered_map

# =============================================================================
# FILE 5: DEQUE (FROM COLLECTIONS)
# =============================================================================

"""
DEQUE - Double-Ended Queue (C++ deque equivalent)
==================================================
- Efficient append/pop from both ends
- O(1) operations at both ends
- Implemented as doubly-linked list of blocks
"""

from collections import deque

# CREATION
dq = deque()  # empty deque
dq = deque([1, 2, 3, 4, 5])  # initialized
dq = deque(maxlen=5)  # fixed-size deque

# ADDING ELEMENTS
dq.append(6)  # O(1) - add to right (like push_back)
dq.appendleft(0)  # O(1) - add to left (like push_front)
dq.extend([7, 8])  # O(k) - extend right
dq.extendleft([−1, −2])  # O(k) - extend left

# REMOVING ELEMENTS
dq.pop()  # O(1) - remove from right (like pop_back)
dq.popleft()  # O(1) - remove from left (like pop_front)

# ACCESSING
first = dq[0]  # O(1)
last = dq[-1]  # O(1)

# ROTATION
dq.rotate(2)  # O(k) - rotate right by 2
dq.rotate(-2)  # O(k) - rotate left by 2

# OTHER OPERATIONS
dq.clear()  # O(n)
length = len(dq)  # O(1)
dq.reverse()  # O(n)

# ITERATION
for item in dq:
    print(item)

# USE CASES
# - BFS in graphs (queue)
# - Sliding window problems
# - Palindrome checking
# - Undo/Redo operations

# TIME COMPLEXITY
# Append/Pop (both ends): O(1)
# Access by index: O(n) (slower than list)
# Insert/Delete middle: O(n)

# =============================================================================
# FILE 6: HEAPQ (PRIORITY QUEUE)
# =============================================================================

"""
HEAPQ - Priority Queue (C++ priority_queue equivalent)
=======================================================
- Min-heap by default (opposite of C++ max-heap default)
- Implemented as binary heap using list
- O(log n) push/pop
"""

import heapq

# CREATION
heap = []  # empty heap (just a list)

# MIN HEAP (DEFAULT)
heapq.heappush(heap, 5)  # O(log n)
heapq.heappush(heap, 2)
heapq.heappush(heap, 8)
heapq.heappush(heap, 1)  # heap = [1, 2, 8, 5]

# GET MINIMUM
min_val = heap[0]  # O(1) - peek at minimum (like top())

# REMOVE MINIMUM
min_val = heapq.heappop(heap)  # O(log n) - remove and return min (like pop())

# HEAPIFY - CONVERT LIST TO HEAP
lst = [5, 2, 8, 1, 9]
heapq.heapify(lst)  # O(n) - convert to min-heap in-place

# N SMALLEST/LARGEST
lst = [5, 2, 8, 1, 9, 3, 7]
smallest_3 = heapq.nsmallest(3, lst)  # [1, 2, 3]
largest_3 = heapq.nlargest(3, lst)  # [9, 8, 7]

# MAX HEAP SIMULATION (PYTHON DOESN'T HAVE DIRECT MAX HEAP)
# Method 1: Negate values
max_heap = []
heapq.heappush(max_heap, -5)  # push negative
heapq.heappush(max_heap, -2)
heapq.heappush(max_heap, -8)
max_val = -heapq.heappop(max_heap)  # negate when popping

# Method 2: Custom class with reversed comparison
class MaxHeapObj:
    def __init__(self, val):
        self.val = val
    def __lt__(self, other):
        return self.val > other.val
    def __eq__(self, other):
        return self.val == other.val

max_heap = []
heapq.heappush(max_heap, MaxHeapObj(5))
heapq.heappush(max_heap, MaxHeapObj(2))
max_val = heapq.heappop(max_heap).val

# PUSH AND POP IN ONE OPERATION
heapq.heappushpop(heap, 10)  # O(log n) - push then pop
heapq.heapreplace(heap, 10)  # O(log n) - pop then push

# TIME COMPLEXITY
# Push: O(log n)
# Pop: O(log n)
# Peek: O(1)
# Heapify: O(n)

# USE CASES
# - Dijkstra's algorithm
# - Huffman coding
# - K-th largest/smallest element
# - Merge K sorted arrays

# =============================================================================
# FILE 7: COUNTER (FROM COLLECTIONS)
# =============================================================================

"""
COUNTER - Frequency Counter
============================
- Subclass of dict
- Count occurrences of elements
- Very useful for frequency problems
"""

from collections import Counter

# CREATION
cnt = Counter()  # empty counter
cnt = Counter([1, 2, 2, 3, 3, 3])  # Counter({3: 3, 2: 2, 1: 1})
cnt = Counter("hello")  # Counter({'l': 2, 'h': 1, 'e': 1, 'o': 1})
cnt = Counter(a=4, b=2)  # Counter({'a': 4, 'b': 2})

# ACCESSING
count = cnt[1]  # get count (returns 0 if not found, not error)

# UPDATING
cnt.update([1, 2, 2])  # add counts
cnt.subtract([1, 2])  # subtract counts

# MOST COMMON
lst = [1, 2, 2, 3, 3, 3, 4, 4, 4, 4]
cnt = Counter(lst)
most_common = cnt.most_common(2)  # [(4, 4), (3, 3)] - top 2 frequent

# OPERATIONS
cnt1 = Counter([1, 2, 2, 3])
cnt2 = Counter([2, 3, 3, 4])

addition = cnt1 + cnt2  # Counter({2: 3, 3: 4, 1: 1, 4: 1})
subtraction = cnt1 - cnt2  # Counter({1: 1, 2: 1})
intersection = cnt1 & cnt2  # Counter({2: 1, 3: 1}) - min counts
union = cnt1 | cnt2  # Counter({3: 2, 2: 2, 1: 1, 4: 1}) - max counts

# CONVERSION
dct = dict(cnt)  # convert to regular dict
lst = list(cnt.elements())  # get list with repeated elements

# ITERATION
for item, count in cnt.items():
    print(f"{item}: {count}")

# USE CASES
# - Anagram problems
# - Character/element frequency
# - Most/least common elements

# TIME COMPLEXITY
# All operations: O(1) average (it's a dict)

# =============================================================================
# FILE 8: DEFAULTDICT (FROM COLLECTIONS)
# =============================================================================

"""
DEFAULTDICT - Dict with Default Values
========================================
- Subclass of dict
- Automatically creates default value for missing keys
- No KeyError
"""

from collections import defaultdict

# CREATION
dd = defaultdict(int)  # default value is 0
dd = defaultdict(list)  # default value is []
dd = defaultdict(set)  # default value is set()
dd = defaultdict(lambda: "N/A")  # custom default

# USAGE
# INT DEFAULT
freq = defaultdict(int)
for char in "hello":
    freq[char] += 1  # no need to check if key exists

# LIST DEFAULT
graph = defaultdict(list)
graph[1].append(2)  # automatically creates empty list
graph[1].append(3)

# SET DEFAULT
groups = defaultdict(set)
groups["vowels"].add('a')
groups["vowels"].add('e')

# CONVERTING TO REGULAR DICT
regular_dict = dict(dd)

# USE CASES
# - Grouping elements
# - Graph adjacency list
# - Counting without checking key existence
# - Building nested structures

# =============================================================================
# FILE 9: BISECT (BINARY SEARCH)
# =============================================================================

"""
BISECT - Binary Search Operations
==================================
- Binary search on sorted sequences
- Like lower_bound/upper_bound in C++
"""

import bisect

# SORTED LIST REQUIRED
lst = [1, 3, 4, 4, 5, 7, 9]

# BISECT_LEFT (LIKE LOWER_BOUND)
# Find leftmost position to insert value to maintain sorted order
pos = bisect.bisect_left(lst, 4)  # 2 - first occurrence of 4
pos = bisect.bisect_left(lst, 6)  # 5 - where 6 would go

# BISECT_RIGHT (LIKE UPPER_BOUND)
# Find rightmost position to insert value to maintain sorted order
pos = bisect.bisect_right(lst, 4)  # 4 - after last 4
pos = bisect.bisect(lst, 4)  # same as bisect_right (alias)

# INSERT WHILE MAINTAINING ORDER
bisect.insort_left(lst, 6)  # O(n) - insert at correct position
bisect.insort_right(lst, 6)  # O(n)

# USE CASES
# - Find insert position in sorted array
# - Count elements in range
# - Find floor/ceiling values

# EXAMPLE: COUNT ELEMENTS IN RANGE [x, y]
def count_range(arr, x, y):
    left = bisect.bisect_left(arr, x)
    right = bisect.bisect_right(arr, y)
    return right - left

# TIME COMPLEXITY
# bisect_left/right: O(log n)
# insort: O(n) - because of insertion in list

# =============================================================================
# FILE 10: SORTING & ALGORITHMS
# =============================================================================

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

# SORTED - RETURN NEW SORTED LIST
lst = [3, 1, 4, 1, 5, 9, 2, 6]
sorted_lst = sorted(lst)  # O(n log n) - original unchanged
sorted_desc = sorted(lst, reverse=True)

# CUSTOM SORTING
# Sort by absolute value
lst = [-4, -2, 1, 3, -5]
lst.sort(key=abs)  # [-2, 1, 3, -4, -5]

# Sort by custom function
lst = ["apple", "pie", "a", "cherry"]
lst.sort(key=len)  # ['a', 'pie', 'apple', 'cherry'] - by length

# Sort by multiple criteria
students = [("Alice", 25), ("Bob", 20), ("Charlie", 25)]
students.sort(key=lambda x: (x[1], x[0]))  # by age, then name

# Sort dict by value
dct = {"a": 3, "b": 1, "c": 2}
sorted_items = sorted(dct.items(), key=lambda x: x[1])

# REVERSE
lst.reverse()  # O(n) - reverse in-place
reversed_lst = list(reversed(lst))  # O(n) - return new reversed

# MIN/MAX
lst = [3, 1, 4, 1, 5, 9, 2, 6]
minimum = min(lst)  # O(n) - like *min_element()
maximum = max(lst)  # O(n) - like *max_element()

# With custom key
words = ["apple", "pie", "a", "cherry"]
longest = max(words, key=len)  # "cherry"

# SUM
total = sum(lst)  # O(n) - sum of all elements

# ANY/ALL
lst = [True, False, True]
if any(lst):  # True - at least one True
    print("At least one True")
if all(lst):  # False - not all True
    print("All True")

# FILTER/MAP (FUNCTIONAL PROGRAMMING)
lst = [1, 2, 3, 4, 5]
evens = list(filter(lambda x: x % 2 == 0, lst))  # [2, 4]
squares = list(map(lambda x: x**2, lst))  # [1, 4, 9, 16, 25]

# TIME COMPLEXITY
# sort/sorted: O(n log n)
# reverse: O(n)
# min/max: O(n)

# =============================================================================
# FILE 11: STRING OPERATIONS
# =============================================================================

"""
STRING OPERATIONS
==================
- Strings are immutable in Python
- Rich set of methods
"""

# CREATION
s = "Hello World"
s = 'Hello World'
s = """Multi
line
string"""

# ACCESSING
first = s[0]  # 'H' - O(1)
last = s[-1]  # 'd' - O(1)

# SLICING
sub = s[0:5]  # "Hello"
sub = s[6:]  # "World"
sub = s[::-1]  # "dlroW olleH" - reverse

# CONCATENATION
s1 = "Hello"
s2 = "World"
result = s1 + " " + s2  # "Hello World" - O(n)
result = " ".join([s1, s2])  # "Hello World" - efficient for multiple

# COMMON METHODS
s = "  Hello World  "
s.strip()  # "Hello World" - remove whitespace
s.lower()  # "  hello world  " - lowercase
s.upper()  # "  HELLO WORLD  " - uppercase
s.title()  # "  Hello World  " - title case
s.replace("World", "Python")  # replace substring

# SPLIT/JOIN
s = "apple,banana,cherry"
fruits = s.split(",")  # ["apple", "banana", "cherry"]
joined = "-".join(fruits)  # "apple-banana-cherry"

# SEARCHING
s = "Hello World"
index = s.find("World")  # 6 - returns -1 if not found
index = s.index("World")  # 6 - raises error if not found
count = s.count("l")  # 3 - count occurrences

# CHECKING
s.startswith("Hello")  # True
s.endswith("World")  # True
s.isalpha()  # False - contains space
s.isdigit()  # False
s.isalnum()  # False
s.isspace()  # False

# FORMATTING
name = "Arnab"
age = 26
# Method 1: f-strings (Python 3.6+)
s = f"My name is {name} and I'm {age}"
# Method 2: format()
s = "My name is {} and I'm {}".format(name, age)
# Method 3: %
s = "My name is %s and I'm %d" % (name, age)

# STRING BUILDING (EFFICIENT)
# BAD: result = "" then result += char (O(n²))
# GOOD: use list and join
chars = []
for char in "hello":
    chars.append(char.upper())
result = "".join(chars)  # "HELLO"

# PALINDROME CHECK
s = "racecar"
is_palindrome = s == s[::-1]  # True

# TIME COMPLEXITY
# Access: O(1)
# Search: O(n)
# Concatenation: O(n)
# Slice: O(k) where k is slice length

# =============================================================================
# FILE 12: COMMON ALGORITHMS & TRICKS
# =============================================================================

"""
COMMON ALGORITHMS & TRICKS
===========================
"""

# TWO POINTERS
def two_sum_sorted(arr, target):
    """Find two numbers that sum to target in sorted array"""
    left, right = 0, len(arr) - 1
    while left < right:
        current_sum = arr[left] + arr[right]
        if current_sum == target:
            return [left, right]
        elif current_sum < target:
            left += 1
        else:
            right -= 1
    return []

# SLIDING WINDOW
def max_sum_subarray(arr, k):
    """Maximum sum of k consecutive elements"""
    if len(arr) < k:
        return 0
    
    window_sum = sum(arr[:k])
    max_sum = window_sum
    
    for i in range(k, len(arr)):
        window_sum = window_sum - arr[i - k] + arr[i]
        max_sum = max(max_sum, window_sum)
    
    return max_sum

# FREQUENCY COUNT
def char_frequency(s):
    """Count character frequency"""
    freq = {}
    for char in s:
        freq[char] = freq.get(char, 0) + 1
    return freq
    # OR: return Counter(s)

# REMOVING DUPLICATES
lst = [1, 2, 2, 3, 3, 3, 4]
unique = list(set(lst))  # [1, 2, 3, 4] - unordered
unique = list(dict.fromkeys(lst))  # [1, 2, 3, 4] - maintains order

# FINDING DUPLICATES
def find_duplicates(lst):
    seen = set()
    duplicates = set()
    for item in lst:
        if item in seen:
            duplicates.add(item)
        else:
            seen.add(item)
    return list(duplicates)

# GROUPING/PARTITIONING
from itertools import groupby
lst = [1, 1, 2, 2, 2, 3, 4, 4]
groups = [(k, list(g)) for k, g in groupby(lst)]
# [(1, [1, 1]), (2, [2, 2, 2]), (3, [3]), (4, [4, 4])]

# FLATTEN NESTED LIST
nested = [[1, 2], [3, 4], [5, 6]]
flat = [item for sublist in nested for item in sublist]
# [1, 2, 3, 4, 5, 6]

# MATRIX TRANSPOSE
matrix = [[1, 2, 3], [4, 5, 6]]
transposed = list(zip(*matrix))  # [(1, 4), (2, 5), (3, 6)]
# Convert back to list of lists
transposed = [list(row) for row in zip(*matrix)]  # [[1, 4], [2, 5], [3, 6]]

# CARTESIAN PRODUCT
from itertools import product
lst1 = [1, 2]
lst2 = ['a', 'b']
result = list(product(lst1, lst2))  # [(1, 'a'), (1, 'b'), (2, 'a'), (2, 'b')]

# POWER SET (ALL SUBSETS)
from itertools import combinations
def power_set(lst):
    result = []
    for i in range(len(lst) + 1):
        result.extend(combinations(lst, i))
    return result

# BINARY TO DECIMAL
binary = "1010"
decimal = int(binary, 2)  # 10

# DECIMAL TO BINARY
decimal = 10
binary = bin(decimal)  # "0b1010"
binary = bin(decimal)[2:]  # "1010" - remove '0b' prefix

# COUNT SET BITS (LIKE __builtin_popcount)
def count_set_bits(n):
    return bin(n).count('1')
# OR: n.bit_count() in Python 3.10+

# GCD AND LCM
import math
gcd = math.gcd(12, 18)  # 6
lcm = abs(12 * 18) // math.gcd(12, 18)  # 36

# PRIME CHECK
def is_prime(n):
    if n < 2:
        return False
    for i in range(2, int(n**0.5) + 1):
        if n % i == 0:
            return False
    return True

# FACTORIAL
import math
factorial = math.factorial(5)  # 120

# PERMUTATIONS AND COMBINATIONS
from itertools import permutations, combinations

lst = [1, 2, 3]
perms = list(permutations(lst))  # All permutations
perms_2 = list(permutations(lst, 2))  # Permutations of length 2

combs = list(combinations(lst, 2))  # All combinations of length 2
# [(1, 2), (1, 3), (2, 3)]

combs_replacement = list(combinations_with_replacement(lst, 2))
# [(1, 1), (1, 2), (1, 3), (2, 2), (2, 3), (3, 3)]

# =============================================================================
# FILE 13: GRAPH REPRESENTATIONS
# =============================================================================

"""
GRAPH REPRESENTATIONS
======================
Common ways to represent graphs in Python
"""

# ADJACENCY LIST (MOST COMMON)
# Using defaultdict
from collections import defaultdict

graph = defaultdict(list)
graph[1].append(2)
graph[1].append(3)
graph[2].append(4)
# {1: [2, 3], 2: [4]}

# Using regular dict
graph = {}
graph[1] = [2, 3]
graph[2] = [4]

# ADJACENCY MATRIX
n = 5  # number of vertices
graph = [[0] * n for _ in range(n)]
# Add edge from u to v
graph[1][2] = 1
graph[2][1] = 1  # for undirected graph

# EDGE LIST
edges = [(1, 2), (1, 3), (2, 4)]

# WEIGHTED GRAPH
# Adjacency list with weights
graph = defaultdict(list)
graph[1].append((2, 5))  # edge from 1 to 2 with weight 5
graph[1].append((3, 3))  # edge from 1 to 3 with weight 3

# =============================================================================
# FILE 14: BFS AND DFS
# =============================================================================

"""
BFS AND DFS
============
Graph traversal algorithms
"""

from collections import deque, defaultdict

# BFS (BREADTH-FIRST SEARCH)
def bfs(graph, start):
    """
    BFS traversal
    Time: O(V + E), Space: O(V)
    """
    visited = set()
    queue = deque([start])
    visited.add(start)
    result = []
    
    while queue:
        node = queue.popleft()
        result.append(node)
        
        for neighbor in graph[node]:
            if neighbor not in visited:
                visited.add(neighbor)
                queue.append(neighbor)
    
    return result

# DFS (DEPTH-FIRST SEARCH) - RECURSIVE
def dfs_recursive(graph, node, visited=None):
    """
    DFS traversal (recursive)
    Time: O(V + E), Space: O(V)
    """
    if visited is None:
        visited = set()
    
    visited.add(node)
    result = [node]
    
    for neighbor in graph[node]:
        if neighbor not in visited:
            result.extend(dfs_recursive(graph, neighbor, visited))
    
    return result

# DFS (DEPTH-FIRST SEARCH) - ITERATIVE
def dfs_iterative(graph, start):
    """
    DFS traversal (iterative)
    Time: O(V + E), Space: O(V)
    """
    visited = set()
    stack = [start]
    result = []
    
    while stack:
        node = stack.pop()
        if node not in visited:
            visited.add(node)
            result.append(node)
            # Add neighbors in reverse order to match recursive DFS
            for neighbor in reversed(graph[node]):
                if neighbor not in visited:
                    stack.append(neighbor)
    
    return result

# SHORTEST PATH IN UNWEIGHTED GRAPH (BFS)
def shortest_path(graph, start, end):
    """Find shortest path using BFS"""
    if start == end:
        return [start]
    
    visited = {start}
    queue = deque([(start, [start])])
    
    while queue:
        node, path = queue.popleft()
        
        for neighbor in graph[node]:
            if neighbor not in visited:
                new_path = path + [neighbor]
                if neighbor == end:
                    return new_path
                visited.add(neighbor)
                queue.append((neighbor, new_path))
    
    return []  # No path found

# =============================================================================
# FILE 15: COMMON CP TRICKS & TEMPLATES
# =============================================================================

"""
COMPETITIVE PROGRAMMING TRICKS
================================
"""

# FAST INPUT/OUTPUT FOR CP
import sys
input = sys.stdin.readline  # Faster input
print = sys.stdout.write  # Faster output (use with "\n")

# READ MULTIPLE INTEGERS IN ONE LINE
# Input: "1 2 3 4 5"
lst = list(map(int, input().split()))

# READ MULTIPLE LINES
n = int(input())
arr = []
for _ in range(n):
    arr.append(int(input()))

# 2D ARRAY INPUT
n, m = map(int, input().split())
matrix = []
for _ in range(n):
    row = list(map(int, input().split()))
    matrix.append(row)

# INFINITY VALUES
INF = float('inf')  # Positive infinity
NEG_INF = float('-inf')  # Negative infinity
# OR for integer: INF = int(1e9) or sys.maxsize

# MODULO OPERATIONS (COMMON IN CP)
MOD = 10**9 + 7
result = (a + b) % MOD
result = (a * b) % MOD
result = pow(a, b, MOD)  # Fast modular exponentiation

# MATRIX INITIALIZATION
# 2D array with zeros
n, m = 5, 5
matrix = [[0] * m for _ in range(n)]  # CORRECT
# matrix = [[0] * m] * n  # WRONG! (shallow copy)

# COORDINATE DIRECTIONS (4-directional)
directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]  # right, down, left, up
# 8-directional
directions_8 = [(0,1), (1,0), (0,-1), (-1,0), (1,1), (1,-1), (-1,1), (-1,-1)]

# CHECK BOUNDS
def in_bounds(x, y, n, m):
    return 0 <= x < n and 0 <= y < m

# SWAP WITHOUT TEMP
a, b = b, a

# MULTIPLE ASSIGNMENT
x = y = z = 0

# CONDITIONAL ASSIGNMENT (TERNARY OPERATOR)
result = a if condition else b

# COMPARING TUPLES (LEXICOGRAPHIC)
# Python compares tuples element by element
(1, 2) < (1, 3)  # True
(1, 2) < (2, 1)  # True

# SORTING WITH MULTIPLE KEYS
arr = [(1, 3), (1, 2), (2, 1)]
arr.sort()  # Sorts by first element, then second: [(1, 2), (1, 3), (2, 1)]

# ACCUMULATE (RUNNING SUM/PRODUCT)
from itertools import accumulate
lst = [1, 2, 3, 4, 5]
prefix_sum = list(accumulate(lst))  # [1, 3, 6, 10, 15]
prefix_product = list(accumulate(lst, lambda x, y: x * y))  # [1, 2, 6, 24, 120]

# ROTATE LIST
lst = [1, 2, 3, 4, 5]
k = 2
rotated = lst[k:] + lst[:k]  # [3, 4, 5, 1, 2]

# CHUNK LIST
def chunks(lst, n):
    """Divide list into chunks of size n"""
    for i in range(0, len(lst), n):
        yield lst[i:i + n]

# MEMOIZATION (FOR RECURSION)
from functools import lru_cache

@lru_cache(maxsize=None)
def fib(n):
    if n <= 1:
        return n
    return fib(n-1) + fib(n-2)

# CUSTOM SORTING
# Sort by absolute value
arr.sort(key=abs)
# Sort by length
strings.sort(key=len)
# Sort by custom function
arr.sort(key=lambda x: (x % 2, x))  # Even first, then by value

# BINARY EXPONENTIATION
def power(base, exp):
    """Fast power calculation - O(log exp)"""
    result = 1
    while exp > 0:
        if exp % 2 == 1:
            result *= base
        base *= base
        exp //= 2
    return result

# SIEVE OF ERATOSTHENES (FIND ALL PRIMES UP TO N)
def sieve(n):
    """Time: O(n log log n), Space: O(n)"""
    is_prime = [True] * (n + 1)
    is_prime[0] = is_prime[1] = False
    
    for i in range(2, int(n**0.5) + 1):
        if is_prime[i]:
            for j in range(i*i, n + 1, i):
                is_prime[j] = False
    
    return [i for i in range(n + 1) if is_prime[i]]

# KADANE'S ALGORITHM (MAXIMUM SUBARRAY SUM)
def max_subarray_sum(arr):
    """Time: O(n), Space: O(1)"""
    max_so_far = float('-inf')
    max_ending_here = 0
    
    for num in arr:
        max_ending_here += num
        max_so_far = max(max_so_far, max_ending_here)
        max_ending_here = max(0, max_ending_here)
    
    return max_so_far

# PREFIX SUM ARRAY
def prefix_sum(arr):
    """Build prefix sum array - O(n)"""
    prefix = [0] * (len(arr) + 1)
    for i in range(len(arr)):
        prefix[i + 1] = prefix[i] + arr[i]
    return prefix

# Query sum in range [l, r] using prefix sum: O(1)
def range_sum(prefix, l, r):
    return prefix[r + 1] - prefix[l]

# =============================================================================
# FILE 16: TIME COMPLEXITY CHEAT SHEET
# =============================================================================

"""
TIME COMPLEXITY CHEAT SHEET
============================

LIST OPERATIONS:
----------------
Access: O(1)
Append: O(1) amortized
Insert at index: O(n)
Delete at index: O(n)
Pop last: O(1)
Pop at index: O(n)
Search: O(n)
Sort: O(n log n)
Reverse: O(n)
Copy: O(n)

TUPLE:
------
Access: O(1)
Search: O(n)
(Immutable - no modification operations)

SET:
----
Add: O(1) average
Remove: O(1) average
Membership test: O(1) average
Union: O(len(s1) + len(s2))
Intersection: O(min(len(s1), len(s2)))
Difference: O(len(s1))

DICTIONARY:
-----------
Access: O(1) average
Insert: O(1) average
Delete: O(1) average
Membership test: O(1) average

DEQUE:
------
Append (both ends): O(1)
Pop (both ends): O(1)
Access by index: O(n)
Insert/Delete middle: O(n)

HEAPQ:
------
Push: O(log n)
Pop: O(log n)
Peek: O(1)
Heapify: O(n)

STRING:
-------
Access: O(1)
Concatenation: O(n)
Substring: O(k) where k is length
Search: O(n*m) where m is pattern length
Split: O(n)
Join: O(n)

SORTING ALGORITHMS:
-------------------
Timsort (Python default): O(n log n) worst case
                          O(n) best case (already sorted)

BINARY SEARCH:
--------------
bisect_left/right: O(log n)

GRAPH ALGORITHMS:
-----------------
BFS: O(V + E)
DFS: O(V + E)
Dijkstra (with heap): O((V + E) log V)
"""

# =============================================================================
# FILE 17: QUICK REFERENCE - C++ TO PYTHON
# =============================================================================

"""
C++ STL TO PYTHON EQUIVALENT
==============================

C++ vector          →  Python list
C++ set             →  Python set (unordered) / SortedSet (sorted)
C++ unordered_set   →  Python set
C++ map             →  Python dict (maintains insertion order in 3.7+)
C++ unordered_map   →  Python dict
C++ multiset        →  Python Counter or list
C++ multimap        →  Python defaultdict(list)
C++ deque           →  Python collections.deque
C++ stack           →  Python list (use append/pop) or collections.deque
C++ queue           →  Python collections.deque (use append/popleft)
C++ priority_queue  →  Python heapq
C++ pair            →  Python tuple
C++ auto            →  Python doesn't need (dynamic typing)

COMMON OPERATIONS:
------------------
C++ push_back()     →  Python append()
C++ pop_back()      →  Python pop()
C++ size()          →  Python len()
C++ empty()         →  Python not lst or len(lst) == 0
C++ clear()         →  Python clear()
C++ begin()         →  Python lst[0] or use index 0
C++ end()           →  Python lst[-1] or use index -1
C++ insert()        →  Python insert(index, value)
C++ erase()         →  Python remove(value) or del lst[index]
C++ find()          →  Python in operator or index()
C++ sort()          →  Python sort() or sorted()
C++ reverse()       →  Python reverse() or [::-1]
C++ lower_bound()   →  Python bisect.bisect_left()
C++ upper_bound()   →  Python bisect.bisect_right()

LOOPS:
------
C++:
for(int i = 0; i < n; i++)

Python:
for i in range(n):

C++:
for(auto x : vec)

Python:
for x in lst:

C++:
for(auto it = vec.begin(); it != vec.end(); it++)

Python:
for i, item in enumerate(lst):

INPUT/OUTPUT:
-------------
C++: cin >> n;
Python: n = int(input())

C++: cout << n << endl;
Python: print(n)

C++: scanf("%d", &n);
Python: n = int(input())

C++: printf("%d", n);
Python: print(n)
"""

# =============================================================================
# FILE 18: COMMON PITFALLS & BEST PRACTICES
# =============================================================================

"""
COMMON PITFALLS IN PYTHON
==========================
"""

# PITFALL 1: MUTABLE DEFAULT ARGUMENTS
# WRONG:
def add_item(item, lst=[]):  # BUG! Same list reused
    lst.append(item)
    return lst

# CORRECT:
def add_item(item, lst=None):
    if lst is None:
        lst = []
    lst.append(item)
    return lst

# PITFALL 2: SHALLOW COPY VS DEEP COPY
# Shallow copy
lst1 = [[1, 2], [3, 4]]
lst2 = lst1.copy()  # or lst1[:]
lst2[0][0] = 999  # Modifies lst1 too! (nested list is shared)

# Deep copy
import copy
lst2 = copy.deepcopy(lst1)  # Now independent

# PITFALL 3: INTEGER DIVISION
result = 5 / 2  # 2.5 (float division)
result = 5 // 2  # 2 (integer division)
result = -5 // 2  # -3 (floors toward negative infinity, not zero!)

# For C++-like division (truncate toward zero):
result = int(-5 / 2)  # -2

# PITFALL 4: MODIFYING LIST WHILE ITERATING
# WRONG:
lst = [1, 2, 3, 4, 5]
for item in lst:
    if item % 2 == 0:
        lst.remove(item)  # BUG! Skips elements

# CORRECT:
lst = [item for item in lst if item % 2 != 0]
# OR iterate over copy:
for item in lst[:]:
    if item % 2 == 0:
        lst.remove(item)

# PITFALL 5: USING 'is' INSTEAD OF '=='
# 'is' checks identity (same object)
# '==' checks equality (same value)
a = [1, 2, 3]
b = [1, 2, 3]
print(a == b)  # True (same value)
print(a is b)  # False (different objects)

# PITFALL 6: VARIABLE SCOPE IN LOOPS
# Variables in loops remain in scope after loop
for i in range(5):
    x = i
print(x)  # 4 (still accessible)

# BEST PRACTICES:
# ---------------
# 1. Use list comprehensions instead of loops when possible
# 2. Use enumerate() instead of range(len())
# 3. Use 'in' for membership testing
# 4. Use defaultdict to avoid KeyError
# 5. Use collections.Counter for frequency counting
# 6. Use set for O(1) lookup instead of list O(n)
# 7. Use generators for large sequences (memory efficient)
# 8. Use tuple for immutable sequences
# 9. Use f-strings for string formatting (Python 3.6+)
# 10. Use 'with' for file operations (automatic cleanup)

# =============================================================================
# END OF PYTHON DSA REFERENCE
# =============================================================================