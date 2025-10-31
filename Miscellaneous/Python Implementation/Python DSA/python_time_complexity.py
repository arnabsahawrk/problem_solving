"""
TIME COMPLEXITY CHEAT SHEET
============================
Complete reference for Python data structures
"""

"""
LIST OPERATIONS:
----------------
Access by index: O(1)
Append to end: O(1) amortized
Insert at beginning: O(n)
Insert at index: O(n)
Delete from end: O(1)
Delete from beginning: O(n)
Delete by index: O(n)
Delete by value: O(n)
Search (in): O(n)
Sort: O(n log n)
Reverse: O(n)
Copy: O(n)
Slice: O(k) where k is slice length
Min/Max: O(n)
Count occurrences: O(n)

TUPLE:
------
Access by index: O(1)
Search: O(n)
Count: O(n)
(Immutable - no modification operations)

SET:
----
Add: O(1) average, O(n) worst
Remove: O(1) average, O(n) worst
Membership test (in): O(1) average, O(n) worst
Union: O(len(s1) + len(s2))
Intersection: O(min(len(s1), len(s2)))
Difference: O(len(s1))
Symmetric difference: O(len(s1) + len(s2))
Copy: O(n)
Iteration: O(n)

FROZENSET:
----------
Same as set (but immutable)

DICTIONARY:
-----------
Access by key: O(1) average, O(n) worst
Insert: O(1) average, O(n) worst
Delete: O(1) average, O(n) worst
Membership test (in): O(1) average, O(n) worst
Get keys/values/items: O(1) to get view, O(n) to iterate
Copy: O(n)
Iteration: O(n)

DEQUE (from collections):
--------------------------
Append (both ends): O(1)
Pop (both ends): O(1)
Access by index: O(n) - LINEAR! Slower than list
Insert/Delete middle: O(n)
Rotate: O(k)
Copy: O(n)
Extend (both ends): O(k)

HEAPQ:
------
Push: O(log n)
Pop: O(log n)
Peek (heap[0]): O(1)
Heapify: O(n)
nsmallest/nlargest: O(n log k) where k is count
Merge sorted: O(n) where n is total elements

COUNTER (from collections):
----------------------------
All operations: O(1) average (it's a dict)
most_common(): O(n log k) where k is requested count
elements(): O(n)
Arithmetic operations (+, -, &, |): O(n + m)

DEFAULTDICT (from collections):
--------------------------------
Same as regular dict: O(1) average for all operations

STRING:
-------
Access by index: O(1)
Concatenation (+): O(n + m)
Multiplication (*): O(n * k)
Search (in, find): O(n * m) where m is pattern length
Search with KMP: O(n + m)
Count occurrences: O(n * m)
Replace: O(n)
Split: O(n)
Join: O(n)
Slice: O(k)
Upper/Lower: O(n)
Strip: O(n)

SORTING ALGORITHMS:
-------------------
Timsort (Python default): 
  - Best case: O(n) for nearly sorted
  - Average: O(n log n)
  - Worst: O(n log n)
  - Space: O(n)

sort() method: O(n log n) in-place
sorted() function: O(n log n) creates new list

SEARCH ALGORITHMS:
------------------
Linear search: O(n)
Binary search (bisect): O(log n) - requires sorted array

GRAPH ALGORITHMS:
-----------------
BFS: O(V + E) where V = vertices, E = edges
DFS: O(V + E)
Dijkstra (with binary heap): O((V + E) log V)
Dijkstra (with Fibonacci heap): O(E + V log V)
Bellman-Ford: O(VE)
Floyd-Warshall: O(V³)
Prim's MST: O(E log V) with heap
Kruskal's MST: O(E log E) or O(E log V)
Topological Sort: O(V + E)

DYNAMIC PROGRAMMING:
--------------------
Fibonacci (memoized): O(n)
0/1 Knapsack: O(n * W) where W is capacity
LCS: O(n * m)
LIS: O(n²) naive, O(n log n) optimized

NUMBER THEORY:
--------------
GCD (Euclidean): O(log min(a, b))
Modular exponentiation: O(log exp)
Sieve of Eratosthenes: O(n log log n)
Prime check (trial division): O(√n)
Factorization (trial division): O(√n)

COMMON OPERATIONS COMPARISON:
------------------------------

Finding element:
  List: O(n)
  Set: O(1) average
  Dict (by key): O(1) average

Adding element:
  List (end): O(1)
  List (beginning): O(n)
  Set: O(1) average
  Dict: O(1) average
  Deque (both ends): O(1)

Removing element:
  List (end): O(1)
  List (beginning/middle): O(n)
  Set: O(1) average
  Dict: O(1) average
  Deque (both ends): O(1)

Maintaining sorted order:
  List + bisect.insort: O(n) per insertion
  Heap: O(log n) per insertion
  Balanced BST (need external library): O(log n)

SPACE COMPLEXITY:
-----------------
List: O(n)
Set: O(n)
Dict: O(n)
Deque: O(n)
Heap: O(n) - uses list internally
Recursion depth: O(d) where d is depth

PRACTICAL GUIDELINES:
---------------------
n ≤ 10: O(n!) or O(2ⁿ)
n ≤ 20: O(2ⁿ)
n ≤ 100: O(n³) or O(n² log n)
n ≤ 1000: O(n²)
n ≤ 10⁵: O(n log n)
n ≤ 10⁶: O(n) or O(n log n)
n ≤ 10⁸: O(n)
n ≤ 10⁹: O(log n) or O(1)
"""

# EXAMPLES OF TIME COMPLEXITIES IN CODE

# O(1) - Constant
def constant_time(arr):
    return arr[0]

# O(log n) - Logarithmic
def binary_search(arr, target):
    left, right = 0, len(arr) - 1
    while left <= right:
        mid = (left + right) // 2
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    return -1

# O(n) - Linear
def linear_time(arr):
    total = 0
    for num in arr:
        total += num
    return total

# O(n log n) - Linearithmic
def nlogn_time(arr):
    return sorted(arr)

# O(n²) - Quadratic
def quadratic_time(arr):
    count = 0
    for i in range(len(arr)):
        for j in range(len(arr)):
            count += 1
    return count

# O(2ⁿ) - Exponential
def fibonacci_recursive(n):
    if n <= 1:
        return n
    return fibonacci_recursive(n-1) + fibonacci_recursive(n-2)

# O(n!) - Factorial
from itertools import permutations
def all_permutations(arr):
    return list(permutations(arr))