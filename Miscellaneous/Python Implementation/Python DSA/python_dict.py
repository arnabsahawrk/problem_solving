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
dct.update(country="BD", code=880)  # alternative syntax

# ACCESSING
name = dct["name"]  # O(1) - raises KeyError if not found
name = dct.get("name")  # O(1) - returns None if not found
name = dct.get("name", "Default")  # O(1) - with default value

# REMOVING
del dct["age"]  # O(1) - delete key (raises KeyError if not found)
value = dct.pop("city")  # O(1) - remove and return value
value = dct.pop("city", "Not Found")  # with default if key missing
dct.popitem()  # O(1) - remove and return arbitrary (key, value) pair
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

for key, value in dct.items():  # iterate over key-value pairs (COMMON)
    print(f"{key}: {value}")

for value in dct.values():  # iterate over values
    print(value)

# DICTIONARY COMPREHENSION
squares = {x: x**2 for x in range(5)}  # {0: 0, 1: 1, 2: 4, 3: 9, 4: 16}
filtered = {k: v for k, v in dct.items() if v > 20}  # filter dict

# NESTED DICTIONARIES
student = {
    "name": "Arnab",
    "grades": {"math": 90, "science": 85},
    "courses": ["DSA", "OOP"]
}

# MERGING DICTIONARIES (PYTHON 3.9+)
dict1 = {"a": 1, "b": 2}
dict2 = {"b": 3, "c": 4}
merged = dict1 | dict2  # {"a": 1, "b": 3, "c": 4} - dict2 overwrites

# MERGING (PYTHON 3.5+)
merged = {**dict1, **dict2}  # same result

# MERGING (ANY PYTHON VERSION)
merged = dict1.copy()
merged.update(dict2)

# SETDEFAULT - GET OR CREATE
dct.setdefault("new_key", "default_value")  # if key exists, return value; else set and return

# SORTING DICTIONARY
dct = {"c": 3, "a": 1, "b": 2}
sorted_keys = sorted(dct)  # ['a', 'b', 'c'] - sorted keys
sorted_items = sorted(dct.items())  # [('a', 1), ('b', 2), ('c', 3)]
sorted_by_value = sorted(dct.items(), key=lambda x: x[1])  # sort by value

# COUNTING WITH DICT
text = "hello"
freq = {}
for char in text:
    freq[char] = freq.get(char, 0) + 1
# OR use Counter from collections (better)

# TIME COMPLEXITY SUMMARY
"""
Access: O(1) average, O(n) worst
Insert: O(1) average, O(n) worst
Delete: O(1) average, O(n) worst
Search: O(1) average, O(n) worst
Like C++ unordered_map
"""