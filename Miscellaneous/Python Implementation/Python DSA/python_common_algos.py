"""
COMMON ALGORITHMS & TRICKS
===========================
Frequently used patterns in competitive programming
"""

# TWO POINTERS
def two_sum_sorted(arr, target):
    """Find two numbers that sum to target in sorted array - O(n)"""
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
    """Maximum sum of k consecutive elements - O(n)"""
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
    """Count character frequency - O(n)"""
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
    """Find all duplicate elements - O(n)"""
    seen = set()
    duplicates = set()
    for item in lst:
        if item in seen:
            duplicates.add(item)
        else:
            seen.add(item)
    return list(duplicates)

# FLATTEN NESTED LIST
nested = [[1, 2], [3, 4], [5, 6]]
flat = [item for sublist in nested for item in sublist]
# [1, 2, 3, 4, 5, 6]

# MATRIX TRANSPOSE
matrix = [[1, 2, 3], [4, 5, 6]]
transposed = list(zip(*matrix))  # [(1, 4), (2, 5), (3, 6)]
transposed = [list(row) for row in zip(*matrix)]  # [[1, 4], [2, 5], [3, 6]]

# CARTESIAN PRODUCT
from itertools import product
lst1 = [1, 2]
lst2 = ['a', 'b']
result = list(product(lst1, lst2))  # [(1, 'a'), (1, 'b'), (2, 'a'), (2, 'b')]

# POWER SET (ALL SUBSETS)
from itertools import combinations
def power_set(lst):
    """Generate all subsets - O(2^n)"""
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
binary = format(decimal, 'b')  # "1010" - alternative

# COUNT SET BITS (LIKE __builtin_popcount)
def count_set_bits(n):
    """Count number of 1s in binary representation"""
    return bin(n).count('1')
# OR: n.bit_count() in Python 3.10+

# GCD AND LCM
import math
gcd = math.gcd(12, 18)  # 6
lcm = abs(12 * 18) // math.gcd(12, 18)  # 36

# GCD of multiple numbers
from functools import reduce
def gcd_multiple(numbers):
    return reduce(math.gcd, numbers)

# PRIME CHECK
def is_prime(n):
    """Check if number is prime - O(√n)"""
    if n < 2:
        return False
    if n == 2:
        return True
    if n % 2 == 0:
        return False
    for i in range(3, int(n**0.5) + 1, 2):
        if n % i == 0:
            return False
    return True

# FACTORIAL
import math
factorial = math.factorial(5)  # 120

# Or iterative
def factorial(n):
    result = 1
    for i in range(2, n + 1):
        result *= i
    return result

# PERMUTATIONS AND COMBINATIONS
from itertools import permutations, combinations, combinations_with_replacement

lst = [1, 2, 3]

# All permutations
perms = list(permutations(lst))  # [(1,2,3), (1,3,2), (2,1,3), ...]

# Permutations of length k
perms_2 = list(permutations(lst, 2))  # [(1,2), (1,3), (2,1), ...]

# Combinations
combs = list(combinations(lst, 2))  # [(1,2), (1,3), (2,3)]

# Combinations with replacement
combs_r = list(combinations_with_replacement(lst, 2))
# [(1,1), (1,2), (1,3), (2,2), (2,3), (3,3)]

# KADANE'S ALGORITHM (MAXIMUM SUBARRAY SUM)
def max_subarray_sum(arr):
    """Maximum sum of contiguous subarray - O(n)"""
    max_so_far = float('-inf')
    max_ending_here = 0
    
    for num in arr:
        max_ending_here += num
        max_so_far = max(max_so_far, max_ending_here)
        max_ending_here = max(0, max_ending_here)
    
    return max_so_far

# PREFIX SUM
def prefix_sum(arr):
    """Build prefix sum array - O(n)"""
    prefix = [0] * (len(arr) + 1)
    for i in range(len(arr)):
        prefix[i + 1] = prefix[i] + arr[i]
    return prefix

# Query sum in range [l, r] - O(1)
def range_sum(prefix, l, r):
    return prefix[r + 1] - prefix[l]

# SIEVE OF ERATOSTHENES
def sieve(n):
    """Find all primes up to n - O(n log log n)"""
    is_prime = [True] * (n + 1)
    is_prime[0] = is_prime[1] = False
    
    for i in range(2, int(n**0.5) + 1):
        if is_prime[i]:
            for j in range(i*i, n + 1, i):
                is_prime[j] = False
    
    return [i for i in range(n + 1) if is_prime[i]]

# BINARY EXPONENTIATION
def power(base, exp, mod=None):
    """Fast power calculation - O(log exp)"""
    result = 1
    base = base % mod if mod else base
    
    while exp > 0:
        if exp % 2 == 1:
            result = (result * base) % mod if mod else result * base
        base = (base * base) % mod if mod else base * base
        exp //= 2
    
    return result

# EUCLIDEAN ALGORITHM (GCD)
def gcd(a, b):
    """Greatest common divisor - O(log min(a, b))"""
    while b:
        a, b = b, a % b
    return a