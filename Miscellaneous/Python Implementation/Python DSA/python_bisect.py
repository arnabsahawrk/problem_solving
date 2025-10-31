"""
BISECT - Binary Search Operations
==================================
- Binary search on sorted sequences
- Like lower_bound/upper_bound in C++
- REQUIRES SORTED LIST
"""

import bisect

# SORTED LIST REQUIRED
lst = [1, 3, 4, 4, 5, 7, 9]

# BISECT_LEFT (LIKE C++ LOWER_BOUND)
# Find leftmost position to insert value to maintain sorted order
pos = bisect.bisect_left(lst, 4)  # 2 - first occurrence of 4
pos = bisect.bisect_left(lst, 6)  # 5 - where 6 would go
pos = bisect.bisect_left(lst, 0)  # 0 - before all elements
pos = bisect.bisect_left(lst, 10)  # 7 - after all elements

# BISECT_RIGHT (LIKE C++ UPPER_BOUND)
# Find rightmost position to insert value to maintain sorted order
pos = bisect.bisect_right(lst, 4)  # 4 - after last 4
pos = bisect.bisect(lst, 4)  # same as bisect_right (alias)
pos = bisect.bisect_right(lst, 6)  # 5 - where 6 would go

# INSERT WHILE MAINTAINING ORDER
lst = [1, 3, 5, 7, 9]
bisect.insort_left(lst, 6)  # O(n) - insert at correct position → [1, 3, 5, 6, 7, 9]
bisect.insort_right(lst, 6)  # O(n) - insert at rightmost position
bisect.insort(lst, 6)  # alias for insort_right

# COMMON PATTERNS

# Find if element exists
def exists(arr, x):
    pos = bisect.bisect_left(arr, x)
    return pos < len(arr) and arr[pos] == x

# Count occurrences in sorted array
def count_occurrences(arr, x):
    left = bisect.bisect_left(arr, x)
    right = bisect.bisect_right(arr, x)
    return right - left

# Count elements in range [x, y]
def count_range(arr, x, y):
    left = bisect.bisect_left(arr, x)
    right = bisect.bisect_right(arr, y)
    return right - left

# Find floor (largest element <= x)
def floor(arr, x):
    pos = bisect.bisect_right(arr, x)
    if pos == 0:
        return None  # no element <= x
    return arr[pos - 1]

# Find ceiling (smallest element >= x)
def ceiling(arr, x):
    pos = bisect.bisect_left(arr, x)
    if pos == len(arr):
        return None  # no element >= x
    return arr[pos]

# Find closest element
def closest(arr, x):
    pos = bisect.bisect_left(arr, x)
    if pos == 0:
        return arr[0]
    if pos == len(arr):
        return arr[-1]
    before = arr[pos - 1]
    after = arr[pos]
    return after if (after - x) < (x - before) else before

# Maintain sorted list with duplicates
class SortedList:
    def __init__(self):
        self.data = []
    
    def add(self, x):
        bisect.insort(self.data, x)
    
    def remove(self, x):
        pos = bisect.bisect_left(self.data, x)
        if pos < len(self.data) and self.data[pos] == x:
            del self.data[pos]
    
    def count(self, x):
        left = bisect.bisect_left(self.data, x)
        right = bisect.bisect_right(self.data, x)
        return right - left

# Binary search for custom objects
students = [("Alice", 85), ("Bob", 90), ("Charlie", 75)]
students.sort(key=lambda x: x[1])  # sort by score

# Find position for new student with score 80
pos = bisect.bisect_left([s[1] for s in students], 80)

# TIME COMPLEXITY
"""
bisect_left/right: O(log n)
insort: O(n) - because of insertion in list (O(log n) to find + O(n) to insert)
"""

# USE CASES
# - Find insert position in sorted array
# - Count elements in range
# - Find floor/ceiling values
# - Maintain sorted list
# - Binary search problems