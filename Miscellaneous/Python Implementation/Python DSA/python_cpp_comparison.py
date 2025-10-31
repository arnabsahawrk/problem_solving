"""
C++ STL TO PYTHON EQUIVALENT
==============================
Quick reference for switching from C++ to Python
"""

"""
DATA STRUCTURES:
----------------
C++ vector              →  Python list
C++ set                 →  Python set (unordered) / No sorted version built-in
C++ unordered_set       →  Python set
C++ map                 →  Python dict (insertion order maintained in 3.7+)
C++ unordered_map       →  Python dict
C++ multiset            →  Python Counter (from collections)
C++ multimap            →  Python defaultdict(list) (from collections)
C++ deque               →  Python deque (from collections)
C++ stack               →  Python list or deque
C++ queue               →  Python deque (from collections)
C++ priority_queue      →  Python heapq (min-heap by default!)
C++ pair                →  Python tuple
C++ auto                →  Not needed (dynamic typing)

COMMON OPERATIONS:
------------------
C++                         Python
---------------------------------------------------------------------------
v.push_back(x)          →  lst.append(x)
v.pop_back()            →  lst.pop()
v.size()                →  len(lst)
v.empty()               →  not lst or len(lst) == 0
v.clear()               →  lst.clear()
v.begin()               →  lst[0] or iterate: for x in lst
v.end()                 →  lst[-1] or len(lst)
v.front()               →  lst[0]
v.back()                →  lst[-1]
v.insert(pos, val)      →  lst.insert(index, val)
v.erase(pos)            →  del lst[index] or lst.pop(index)
v.erase(it1, it2)       →  del lst[i:j]

SET OPERATIONS:
---------------
C++                         Python
---------------------------------------------------------------------------
s.insert(x)             →  st.add(x)
s.erase(x)              →  st.remove(x) or st.discard(x)
s.find(x) != s.end()    →  x in st
s.count(x)              →  x in st (returns True/False, not count)
s.size()                →  len(st)
s.empty()               →  not st or len(st) == 0
s.clear()               →  st.clear()
s.lower_bound(x)        →  bisect.bisect_left() on sorted list
s.upper_bound(x)        →  bisect.bisect_right() on sorted list

MAP OPERATIONS:
---------------
C++                         Python
---------------------------------------------------------------------------
m[key] = value          →  dct[key] = value
m.find(key) != m.end()  →  key in dct
m.erase(key)            →  del dct[key] or dct.pop(key)
m.count(key)            →  key in dct
m.size()                →  len(dct)
m.empty()               →  not dct or len(dct) == 0
m.clear()               →  dct.clear()

ALGORITHMS:
-----------
C++                         Python
---------------------------------------------------------------------------
sort(v.begin(), v.end())        →  lst.sort()
sort(v.begin(), v.end(), comp)  →  lst.sort(key=lambda x: ...)
reverse(v.begin(), v.end())     →  lst.reverse() or lst[::-1]
*max_element(v.begin(), v.end()) →  max(lst)
*min_element(v.begin(), v.end()) →  min(lst)
accumulate(v.begin(), v.end())   →  sum(lst)
find(v.begin(), v.end(), x)      →  x in lst or lst.index(x)
count(v.begin(), v.end(), x)     →  lst.count(x)
lower_bound(v.begin(), v.end(),x)→  bisect.bisect_left(lst, x)
upper_bound(v.begin(), v.end(),x)→  bisect.bisect_right(lst, x)
next_permutation()               →  itertools.permutations()
__builtin_popcount(x)            →  bin(x).count('1')

LOOPS:
------
C++                                 Python
---------------------------------------------------------------------------
for(int i=0; i<n; i++)          →  for i in range(n):
for(int i=a; i<=b; i++)         →  for i in range(a, b+1):
for(int i=n; i>=0; i--)         →  for i in range(n, -1, -1):
for(auto x : vec)               →  for x in lst:
for(auto it=v.begin();...)      →  for i, x in enumerate(lst):

INPUT/OUTPUT:
-------------
C++                         Python
---------------------------------------------------------------------------
cin >> n;                   →  n = int(input())
cin >> a >> b >> c;         →  a, b, c = map(int, input().split())
cout << n << endl;          →  print(n)
cout << n << " " << m;      →  print(n, m)
printf("%d", n);            →  print(n)
scanf("%d", &n);            →  n = int(input())

STRING OPERATIONS:
------------------
C++                         Python
---------------------------------------------------------------------------
s.length()              →  len(s)
s.substr(pos, len)      →  s[pos:pos+len]
s.find(sub)             →  s.find(sub) or s.index(sub)
s.append(str)           →  s += str
s.push_back(ch)         →  s += ch
s.pop_back()            →  s = s[:-1]
to_string(n)            →  str(n)
stoi(s)                 →  int(s)
s.compare(s2)           →  s == s2

UTILITY:
--------
C++                         Python
---------------------------------------------------------------------------
pair<int,int> p         →  p = (a, b)
p.first, p.second       →  p[0], p[1]
make_pair(a, b)         →  (a, b)
swap(a, b)              →  a, b = b, a
abs(x)                  →  abs(x)
min(a, b)               →  min(a, b)
max(a, b)               →  max(a, b)
pow(a, b)               →  a ** b or pow(a, b)
sqrt(x)                 →  x ** 0.5 or math.sqrt(x)

CONSTANTS:
----------
C++                         Python
---------------------------------------------------------------------------
INT_MAX                 →  float('inf') or sys.maxsize
INT_MIN                 →  float('-inf') or -sys.maxsize
LLONG_MAX               →  float('inf')
true/false              →  True/False
NULL                    →  None

MATH FUNCTIONS:
---------------
C++                         Python
---------------------------------------------------------------------------
ceil(x)                 →  math.ceil(x)
floor(x)                →  math.floor(x) or int(x) or x//1
log(x)                  →  math.log(x)
log2(x)                 →  math.log2(x)
sqrt(x)                 →  math.sqrt(x) or x**0.5
pow(a, b)               →  pow(a, b) or a**b
gcd(a, b)               →  math.gcd(a, b)
abs(x)                  →  abs(x)

KEY DIFFERENCES:
----------------
1. Python uses 0-based indexing (same as C++)
2. Python strings are immutable (C++ strings are mutable)
3. Python has negative indexing: lst[-1] is last element
4. Python slicing is powerful: lst[start:end:step]
5. Python has list comprehension: [x**2 for x in range(10)]
6. Python division: / is float, // is integer
7. Python modulo with negative: -5 % 3 = 1 (not -2 like C++)
8. Python has multiple return: return a, b, c
9. Python uses 'and', 'or', 'not' instead of &&, ||, !
10. Python heapq is min-heap by default (C++ priority_queue is max-heap)
11. Python dict maintains insertion order (C++ unordered_map doesn't)
12. Python has no pointers or references
13. Python function parameters are passed by reference for mutable objects
14. Python has duck typing (no need to declare types)
15. Python indentation matters (no curly braces)

EXAMPLE CONVERSIONS:
--------------------

C++:
    vector<int> v = {1, 2, 3};
    sort(v.begin(), v.end());
    
Python:
    v = [1, 2, 3]
    v.sort()

C++:
    map<int, int> m;
    m[1] = 2;
    if(m.find(1) != m.end())
    
Python:
    m = {}
    m[1] = 2
    if 1 in m:

C++:
    set<int> s;
    s.insert(1);
    if(s.count(1))
    
Python:
    s = set()
    s.add(1)
    if 1 in s:

C++:
    for(int i = 0; i < n; i++)
        cout << v[i] << " ";
        
Python:
    for i in range(n):
        print(v[i], end=" ")
    # OR
    print(*v)  # unpacking
"""