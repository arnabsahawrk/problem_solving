"""
STRING OPERATIONS
==================
- Strings are immutable in Python
- Rich set of methods
- Like C++ string but immutable
"""

# CREATION
s = "Hello World"
s = 'Hello World'  # single quotes work too
s = """Multi
line
string"""  # triple quotes for multi-line

# ACCESSING
first = s[0]  # 'H' - O(1)
last = s[-1]  # 'd' - O(1)
# s[0] = 'h'  # ERROR! Strings are immutable

# SLICING
s = "Hello World"
sub = s[0:5]  # "Hello"
sub = s[6:]  # "World"
sub = s[:5]  # "Hello"
sub = s[::2]  # "HloWrd" - every 2nd character
sub = s[::-1]  # "dlroW olleH" - reverse

# CONCATENATION
s1 = "Hello"
s2 = "World"
result = s1 + " " + s2  # "Hello World" - O(n)
result = s1 * 3  # "HelloHelloHello" - repetition

# JOIN (EFFICIENT FOR MULTIPLE STRINGS)
words = ["Hello", "World", "Python"]
result = " ".join(words)  # "Hello World Python" - O(n)
result = "-".join(words)  # "Hello-World-Python"
result = "".join(words)  # "HelloWorldPython"

# CASE CONVERSION
s = "  Hello World  "
s.lower()  # "  hello world  "
s.upper()  # "  HELLO WORLD  "
s.title()  # "  Hello World  "
s.capitalize()  # "  hello world  " - first char uppercase
s.swapcase()  # "  hELLO wORLD  " - swap case

# STRIP (REMOVE WHITESPACE)
s.strip()  # "Hello World" - remove leading/trailing whitespace
s.lstrip()  # "Hello World  " - remove left whitespace
s.rstrip()  # "  Hello World" - remove right whitespace
s.strip("H")  # remove specific characters

# REPLACE
s = "Hello World"
s.replace("World", "Python")  # "Hello Python"
s.replace("l", "L")  # "HeLLo WorLd" - replace all occurrences
s.replace("l", "L", 1)  # "HeLlo World" - replace first occurrence

# SPLIT/JOIN
s = "apple,banana,cherry"
fruits = s.split(",")  # ["apple", "banana", "cherry"]
fruits = s.split(",", 1)  # ["apple", "banana,cherry"] - max split 1

lines = "Hello\nWorld\nPython".split("\n")  # split by newline
words = "Hello  World   Python".split()  # split by whitespace (any amount)

# SEARCHING
s = "Hello World"
index = s.find("World")  # 6 - returns -1 if not found
index = s.index("World")  # 6 - raises ValueError if not found
index = s.rfind("o")  # 7 - find from right
count = s.count("l")  # 3 - count occurrences

# CHECKING
s = "Hello"
s.startswith("Hell")  # True
s.endswith("lo")  # True
s.isalpha()  # True - all alphabetic
s.isdigit()  # False - all digits
s.isalnum()  # True - alphanumeric
s.isspace()  # False - all whitespace
s.islower()  # False
s.isupper()  # False

# CHECKING SUBSTRING
if "World" in "Hello World":  # True
    print("Found")

# FORMATTING

# Method 1: f-strings (Python 3.6+) - RECOMMENDED
name = "Arnab"
age = 26
s = f"My name is {name} and I'm {age}"
s = f"Math: {5 + 3}"  # "Math: 8"
s = f"Value: {3.14159:.2f}"  # "Value: 3.14" - format float

# Method 2: format()
s = "My name is {} and I'm {}".format(name, age)
s = "My name is {0} and I'm {1}".format(name, age)
s = "My name is {n} and I'm {a}".format(n=name, a=age)

# Method 3: % formatting (old style)
s = "My name is %s and I'm %d" % (name, age)

# STRING BUILDING (EFFICIENT)
# BAD: result = "" then result += char in loop (O(n²))
# GOOD: use list and join
chars = []
for char in "hello":
    chars.append(char.upper())
result = "".join(chars)  # "HELLO" - O(n)

# COMMON PATTERNS

# Reverse string
s = "hello"
reversed_s = s[::-1]  # "olleh"

# Palindrome check
def is_palindrome(s):
    return s == s[::-1]

# Remove vowels
s = "hello"
no_vowels = "".join([c for c in s if c not in "aeiou"])  # "hll"

# Count character frequency
from collections import Counter
freq = Counter("hello")  # {'h': 1, 'e': 1, 'l': 2, 'o': 1}

# Remove duplicates (maintain order)
s = "hello"
seen = set()
result = "".join([c for c in s if c not in seen and not seen.add(c)])

# Anagram check
def are_anagrams(s1, s2):
    return sorted(s1) == sorted(s2)

# Caesar cipher
def caesar_cipher(s, shift):
    result = []
    for char in s:
        if char.isalpha():
            start = ord('A') if char.isupper() else ord('a')
            shifted = chr((ord(char) - start + shift) % 26 + start)
            result.append(shifted)
        else:
            result.append(char)
    return "".join(result)

# TIME COMPLEXITY
"""
Access: O(1)
Concatenation (+): O(n + m)
Search (in, find): O(n * m) where m is pattern length
Replace: O(n)
Split: O(n)
Join: O(n)
Slice: O(k) where k is slice length
"""