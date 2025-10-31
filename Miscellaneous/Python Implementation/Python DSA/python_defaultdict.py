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
dd = defaultdict(str)  # default value is ""
dd = defaultdict(lambda: "N/A")  # custom default

# USAGE - INT DEFAULT (COUNTING)
freq = defaultdict(int)
for char in "hello":
    freq[char] += 1  # no need to check if key exists!
# {'h': 1, 'e': 1, 'l': 2, 'o': 1}

# USAGE - LIST DEFAULT (GROUPING)
graph = defaultdict(list)
graph[1].append(2)  # automatically creates empty list
graph[1].append(3)
graph[2].append(4)
# {1: [2, 3], 2: [4]}

# USAGE - SET DEFAULT (UNIQUE GROUPING)
groups = defaultdict(set)
groups["vowels"].add('a')
groups["vowels"].add('e')
groups["vowels"].add('a')  # duplicate ignored
# {'vowels': {'a', 'e'}}

# USAGE - DICT DEFAULT (NESTED DICT)
nested = defaultdict(dict)
nested["user1"]["age"] = 25
nested["user1"]["city"] = "Dhaka"
# {'user1': {'age': 25, 'city': 'Dhaka'}}

# USAGE - LAMBDA DEFAULT (CUSTOM)
dd = defaultdict(lambda: "Unknown")
dd["name"] = "Arnab"
print(dd["name"])  # "Arnab"
print(dd["age"])  # "Unknown"

# CONVERTING TO REGULAR DICT
regular_dict = dict(dd)

# COMMON PATTERNS

# Graph adjacency list
graph = defaultdict(list)
edges = [(1, 2), (1, 3), (2, 4)]
for u, v in edges:
    graph[u].append(v)

# Group elements by property
students = [
    {"name": "Alice", "grade": "A"},
    {"name": "Bob", "grade": "B"},
    {"name": "Charlie", "grade": "A"}
]
by_grade = defaultdict(list)
for student in students:
    by_grade[student["grade"]].append(student["name"])
# {'A': ['Alice', 'Charlie'], 'B': ['Bob']}

# Count occurrences (alternative to Counter)
text = "hello world"
freq = defaultdict(int)
for char in text:
    freq[char] += 1

# Accumulate values
scores = [("Alice", 10), ("Bob", 5), ("Alice", 15), ("Bob", 10)]
totals = defaultdict(int)
for name, score in scores:
    totals[name] += score
# {'Alice': 25, 'Bob': 15}

# Set of lists (collect unique items per key)
items = [("fruit", "apple"), ("fruit", "banana"), ("vegetable", "carrot")]
categories = defaultdict(set)
for category, item in items:
    categories[category].add(item)
# {'fruit': {'apple', 'banana'}, 'vegetable': {'carrot'}}

# Nested defaultdict
tree = lambda: defaultdict(tree)
users = tree()
users["user1"]["profile"]["age"] = 25
users["user1"]["profile"]["city"] = "Dhaka"

# TIME COMPLEXITY
"""
Same as regular dict: O(1) average for all operations
"""

# USE CASES
# - Grouping elements
# - Graph adjacency list
# - Counting without checking key existence
# - Building nested structures
# - Avoiding KeyError