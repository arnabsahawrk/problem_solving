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
count = cnt['z']  # 0 (key doesn't exist, but no error)

# UPDATING
cnt.update([1, 2, 2])  # add counts
cnt.update("hello")  # add counts from string
cnt.subtract([1, 2])  # subtract counts (can go negative)

# MOST COMMON
lst = [1, 2, 2, 3, 3, 3, 4, 4, 4, 4]
cnt = Counter(lst)
most_common = cnt.most_common(2)  # [(4, 4), (3, 3)] - top 2 frequent
all_common = cnt.most_common()  # all elements sorted by frequency

# OPERATIONS
cnt1 = Counter([1, 2, 2, 3])  # Counter({2: 2, 1: 1, 3: 1})
cnt2 = Counter([2, 3, 3, 4])  # Counter({3: 2, 2: 1, 4: 1})

# Addition
addition = cnt1 + cnt2  # Counter({2: 3, 3: 3, 1: 1, 4: 1})

# Subtraction (keeps only positive counts)
subtraction = cnt1 - cnt2  # Counter({2: 1, 1: 1})

# Intersection (minimum counts)
intersection = cnt1 & cnt2  # Counter({2: 1, 3: 1})

# Union (maximum counts)
union = cnt1 | cnt2  # Counter({3: 2, 2: 2, 1: 1, 4: 1})

# CONVERSION
dct = dict(cnt)  # convert to regular dict
lst = list(cnt.elements())  # get list with repeated elements
# Counter({3: 3, 2: 2}) → [3, 3, 3, 2, 2]

# ITERATION
for item, count in cnt.items():
    print(f"{item}: {count}")

for item in cnt:  # iterate over keys
    print(item)

# COMMON PATTERNS

# Find character frequency
text = "hello world"
freq = Counter(text)

# Find most common character
most_common_char = freq.most_common(1)[0][0]

# Check if two strings are anagrams
def is_anagram(s1, s2):
    return Counter(s1) == Counter(s2)

# Find first non-repeating character
def first_non_repeating(s):
    freq = Counter(s)
    for char in s:
        if freq[char] == 1:
            return char
    return None

# Count word frequency
text = "hello world hello python world"
words = text.split()
word_freq = Counter(words)

# TIME COMPLEXITY
"""
All operations: O(1) average (it's a dict)
most_common(): O(n log k) where k is number of requested elements
"""

# USE CASES
# - Anagram problems
# - Character/element frequency
# - Most/least common elements
# - Finding duplicates
# - Histogram data