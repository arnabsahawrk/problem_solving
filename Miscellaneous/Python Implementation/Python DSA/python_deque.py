"""
DEQUE - Double-Ended Queue (C++ deque equivalent)
==================================================
- Efficient append/pop from both ends
- O(1) operations at both ends
- Implemented as doubly-linked list of blocks
- Like C++ deque
"""

from collections import deque

# CREATION
dq = deque()  # empty deque
dq = deque([1, 2, 3, 4, 5])  # initialized
dq = deque(maxlen=5)  # fixed-size deque (auto-removes old elements)

# ADDING ELEMENTS
dq.append(6)  # O(1) - add to right (like push_back)
dq.appendleft(0)  # O(1) - add to left (like push_front)
dq.extend([7, 8])  # O(k) - extend right
dq.extendleft([-1, -2])  # O(k) - extend left (adds in reverse order!)

# REMOVING ELEMENTS
dq.pop()  # O(1) - remove from right (like pop_back)
dq.popleft()  # O(1) - remove from left (like pop_front)

# ACCESSING
first = dq[0]  # O(1) - access first element
last = dq[-1]  # O(1) - access last element
# Note: Random access is O(n) for deque (slower than list)

# ROTATION
dq = deque([1, 2, 3, 4, 5])
dq.rotate(2)  # O(k) - rotate right by 2 → [4, 5, 1, 2, 3]
dq.rotate(-2)  # O(k) - rotate left by 2 → [1, 2, 3, 4, 5]

# OTHER OPERATIONS
dq.clear()  # O(n) - remove all
length = len(dq)  # O(1)
dq.reverse()  # O(n) - reverse in-place
count = dq.count(3)  # O(n)
dq.remove(3)  # O(n) - remove first occurrence

# ITERATION
for item in dq:
    print(item)

# MAXLEN BEHAVIOR (CIRCULAR BUFFER)
dq = deque(maxlen=3)
dq.extend([1, 2, 3])  # [1, 2, 3]
dq.append(4)  # [2, 3, 4] - automatically removed leftmost

# USE CASES
# - BFS in graphs (queue)
# - Sliding window problems
# - Palindrome checking
# - Undo/Redo operations
# - Queue and Stack implementations

# AS QUEUE (FIFO)
queue = deque()
queue.append(1)  # enqueue
queue.append(2)
item = queue.popleft()  # dequeue

# AS STACK (LIFO)
stack = deque()
stack.append(1)  # push
stack.append(2)
item = stack.pop()  # pop

# TIME COMPLEXITY
"""
Append/Pop (both ends): O(1)
Access by index: O(n) - slower than list!
Insert/Delete middle: O(n)
Rotation: O(k)
"""