"""
LIST - Dynamic Array (C++ vector equivalent)
============================================
- Ordered, mutable, allows duplicates
- Implemented as dynamic array
- Index-based access O(1)
- Like C++ vector
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

# 2D LIST (MATRIX)
matrix = [[0] * 3 for _ in range(3)]  # 3x3 matrix with zeros
# WRONG: matrix = [[0] * 3] * 3  # This creates shallow copies!

# TIME COMPLEXITY SUMMARY
"""
Access: O(1)
Append: O(1) amortized
Insert at beginning: O(n)
Insert at index: O(n)
Delete: O(n)
Search: O(n)
Sort: O(n log n)
Reverse: O(n)
"""