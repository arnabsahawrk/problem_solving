"""
COMPETITIVE PROGRAMMING TRICKS
================================
Common templates and shortcuts for CP
"""

import sys
from collections import defaultdict, Counter, deque
from itertools import accumulate, permutations, combinations
import math

# FAST INPUT/OUTPUT FOR CP
input = sys.stdin.readline  # Faster input
# print = sys.stdout.write  # Faster output (use with "\n")

# READ SINGLE INTEGER
n = int(input())

# READ MULTIPLE INTEGERS IN ONE LINE
# Input: "1 2 3 4 5"
a, b, c = map(int, input().split())
lst = list(map(int, input().split()))

# READ STRING
s = input().strip()  # remove trailing newline

# READ MULTIPLE LINES
n = int(input())
arr = []
for _ in range(n):
    arr.append(int(input()))

# OR list comprehension
arr = [int(input()) for _ in range(n)]

# 2D ARRAY INPUT
n, m = map(int, input().split())
matrix = []
for _ in range(n):
    row = list(map(int, input().split()))
    matrix.append(row)

# OR list comprehension
matrix = [list(map(int, input().split())) for _ in range(n)]

# INFINITY VALUES
INF = float('inf')  # Positive infinity
NEG_INF = float('-inf')  # Negative infinity
# OR for integer: INF = int(1e9) or sys.maxsize

# MODULO OPERATIONS (COMMON IN CP)
MOD = 10**9 + 7
result = (a + b) % MOD
result = (a * b) % MOD
result = (a - b + MOD) % MOD  # handle negative
result = pow(a, b, MOD)  # Fast modular exponentiation O(log b)

# MODULAR INVERSE (FERMAT'S LITTLE THEOREM)
def mod_inverse(a, mod=MOD):
    return pow(a, mod - 2, mod)

# MATRIX INITIALIZATION
# 2D array with zeros - CORRECT WAY
n, m = 5, 5
matrix = [[0] * m for _ in range(n)]
# WRONG: matrix = [[0] * m] * n  # Shallow copy!

# 3D array
x, y, z = 3, 4, 5
arr_3d = [[[0] * z for _ in range(y)] for _ in range(x)]

# COORDINATE DIRECTIONS
# 4-directional (right, down, left, up)
dx = [0, 1, 0, -1]
dy = [1, 0, -1, 0]
directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]

# 8-directional
directions_8 = [
    (0, 1), (1, 0), (0, -1), (-1, 0),
    (1, 1), (1, -1), (-1, 1), (-1, -1)
]

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
(1, 2) < (1, 3)  # True
(1, 2) < (2, 1)  # True

# SORTING WITH MULTIPLE KEYS
arr = [(1, 3), (1, 2), (2, 1)]
arr.sort()  # [(1, 2), (1, 3), (2, 1)]

# ACCUMULATE (RUNNING SUM/PRODUCT)
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

# GCD AND LCM
def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def lcm(a, b):
    return abs(a * b) // gcd(a, b)

# SIEVE OF ERATOSTHENES
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

# PREFIX SUM
def build_prefix_sum(arr):
    """Build prefix sum array - O(n)"""
    prefix = [0] * (len(arr) + 1)
    for i in range(len(arr)):
        prefix[i + 1] = prefix[i] + arr[i]
    return prefix

# Query sum in range [l, r]: O(1)
def range_sum(prefix, l, r):
    return prefix[r + 1] - prefix[l]

# BINARY SEARCH TEMPLATE
def binary_search(arr, target):
    """Find target in sorted array - O(log n)"""
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

# BINARY SEARCH - LEFTMOST
def binary_search_left(arr, target):
    """Find leftmost occurrence - O(log n)"""
    left, right = 0, len(arr)
    
    while left < right:
        mid = (left + right) // 2
        if arr[mid] < target:
            left = mid + 1
        else:
            right = mid
    
    return left

# BINARY SEARCH - RIGHTMOST
def binary_search_right(arr, target):
    """Find rightmost occurrence - O(log n)"""
    left, right = 0, len(arr)
    
    while left < right:
        mid = (left + right) // 2
        if arr[mid] <= target:
            left = mid + 1
        else:
            right = mid
    
    return left - 1

# COMMON CP TEMPLATE
def solve():
    """Solution template"""
    # Read input
    n = int(input())
    arr = list(map(int, input().split()))
    
    # Your solution here
    result = 0
    
    # Output
    print(result)

# For multiple test cases
def main():
    t = int(input())
    for _ in range(t):
        solve()

if __name__ == "__main__":
    # solve()  # Single test case
    main()  # Multiple test cases