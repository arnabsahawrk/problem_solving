"""
list: Python’s dynamic array. Stores references to Python objects (heterogeneous). Backed by a contiguous C array;
resizing is amortized.

Key operations & average time complexities
-----------------------------------------------------
list[i] (indexing): O(1)

list.append(x): amortized O(1)

list.pop() (from end): O(1)

list.pop(i) (from middle / front): O(n) because elements shift

list.insert(i, x): O(n) (shifts)

list.extend(iterable): O(k) where k = len(iterable) (plus occasional reallocation cost amortized)

list.remove(x): O(n) (find + shift)

x in list: O(n) (linear search)

list.sort() / sorted(list): O(n log n)
"""
