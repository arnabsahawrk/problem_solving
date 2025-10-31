"""
GRAPH REPRESENTATIONS
======================
Common ways to represent graphs in Python
"""

from collections import defaultdict

# ADJACENCY LIST (MOST COMMON)
# Using defaultdict
graph = defaultdict(list)
graph[1].append(2)
graph[1].append(3)
graph[2].append(4)
# {1: [2, 3], 2: [4]}

# Using regular dict
graph = {}
graph[1] = [2, 3]
graph[2] = [4]
graph[3] = []

# ADJACENCY MATRIX
n = 5  # number of vertices
graph = [[0] * n for _ in range(n)]

# Add edge from u to v
u, v = 1, 2
graph[u][v] = 1  # directed edge
# For undirected:
graph[u][v] = 1
graph[v][u] = 1

# EDGE LIST
edges = [(1, 2), (1, 3), (2, 4), (3, 4)]

# WEIGHTED GRAPH - ADJACENCY LIST
graph = defaultdict(list)
# Add edge from u to v with weight w
graph[1].append((2, 5))  # edge 1→2 with weight 5
graph[1].append((3, 3))  # edge 1→3 with weight 3
graph[2].append((4, 1))  # edge 2→4 with weight 1

# WEIGHTED GRAPH - ADJACENCY MATRIX
n = 5
INF = float('inf')
graph = [[INF] * n for _ in range(n)]

# Add edge from u to v with weight w
graph[1][2] = 5
graph[1][3] = 3
# For undirected:
graph[2][1] = 5

# Set diagonal to 0 (distance from node to itself)
for i in range(n):
    graph[i][i] = 0

# UNDIRECTED GRAPH
graph = defaultdict(list)
def add_edge(u, v):
    graph[u].append(v)
    graph[v].append(u)

add_edge(1, 2)
add_edge(1, 3)

# DIRECTED GRAPH
graph = defaultdict(list)
def add_directed_edge(u, v):
    graph[u].append(v)

add_directed_edge(1, 2)
add_directed_edge(2, 3)

# GRAPH WITH NODE VALUES/ATTRIBUTES
class Node:
    def __init__(self, val):
        self.val = val
        self.neighbors = []

# Or using dict
graph = {}
graph[1] = {"value": "A", "neighbors": [2, 3]}
graph[2] = {"value": "B", "neighbors": [4]}

# BUILDING GRAPH FROM EDGES
def build_graph(n, edges, directed=False):
    """Build adjacency list from edge list"""
    graph = defaultdict(list)
    for u, v in edges:
        graph[u].append(v)
        if not directed:
            graph[v].append(u)
    return graph

# Example
edges = [(1, 2), (1, 3), (2, 4), (3, 4)]
graph = build_graph(5, edges)

# WEIGHTED GRAPH FROM EDGES
def build_weighted_graph(n, edges, directed=False):
    """Build weighted adjacency list from edge list with weights"""
    graph = defaultdict(list)
    for u, v, w in edges:
        graph[u].append((v, w))
        if not directed:
            graph[v].append((u, w))
    return graph

# Example
edges = [(1, 2, 5), (1, 3, 3), (2, 4, 1)]
graph = build_weighted_graph(5, edges)

# REVERSE GRAPH
def reverse_graph(graph):
    """Reverse all edges in directed graph"""
    reversed_graph = defaultdict(list)
    for node in graph:
        for neighbor in graph[node]:
            reversed_graph[neighbor].append(node)
    return reversed_graph

# DEGREE OF NODES
def get_degrees(graph, n):
    """Get in-degree and out-degree of all nodes"""
    in_degree = [0] * (n + 1)
    out_degree = [0] * (n + 1)
    
    for node in graph:
        out_degree[node] = len(graph[node])
        for neighbor in graph[node]:
            in_degree[neighbor] += 1
    
    return in_degree, out_degree

# CHECK IF GRAPH IS CONNECTED (UNDIRECTED)
def is_connected(graph, n):
    """Check if undirected graph is connected using DFS"""
    if n == 0:
        return True
    
    visited = set()
    stack = [1]  # start from node 1
    
    while stack:
        node = stack.pop()
        if node not in visited:
            visited.add(node)
            for neighbor in graph[node]:
                if neighbor not in visited:
                    stack.append(neighbor)
    
    return len(visited) == n