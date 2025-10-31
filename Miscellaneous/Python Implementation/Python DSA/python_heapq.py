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

# MERGE SORTED ITERABLES
merged = list(heapq.merge([1, 3, 5], [2, 4, 6]))  # [1, 2, 3, 4, 5, 6]

# HEAP WITH CUSTOM OBJECTS
tasks = []
heapq.heappush(tasks, (1, "high priority"))  # (priority, task)
heapq.heappush(tasks, (5, "low priority"))
heapq.heappush(tasks, (3, "medium priority"))
priority, task = heapq.heappop(tasks)  # gets (1, "high priority")

# TIME COMPLEXITY
"""
Push: O(log n)
Pop: O(log n)
Peek: O(1)
Heapify: O(n)
nsmallest/nlargest: O(n log k) where k is number of elements
"""

# USE CASES
# - Dijkstra's algorithm
# - Huffman coding
# - K-th largest/smallest element
# - Merge K sorted arrays
# - Task scheduling by priority