"""
BFS AND DFS
============
Graph traversal algorithms
"""

from collections import deque, defaultdict

# BFS (BREADTH-FIRST SEARCH)
def bfs(graph, start):
    """
    BFS traversal
    Time: O(V + E), Space: O(V)
    """
    visited = set()
    queue = deque([start])
    visited.add(start)
    result = []
    
    while queue:
        node = queue.popleft()
        result.append(node)
        
        for neighbor in graph[node]:
            if neighbor not in visited:
                visited.add(neighbor)
                queue.append(neighbor)
    
    return result

# DFS (DEPTH-FIRST SEARCH) - RECURSIVE
def dfs_recursive(graph, node, visited=None):
    """
    DFS traversal (recursive)
    Time: O(V + E), Space: O(V)
    """
    if visited is None:
        visited = set()
    
    visited.add(node)
    result = [node]
    
    for neighbor in graph[node]:
        if neighbor not in visited:
            result.extend(dfs_recursive(graph, neighbor, visited))
    
    return result

# DFS (DEPTH-FIRST SEARCH) - ITERATIVE
def dfs_iterative(graph, start):
    """
    DFS traversal (iterative)
    Time: O(V + E), Space: O(V)
    """
    visited = set()
    stack = [start]
    result = []
    
    while stack:
        node = stack.pop()
        if node not in visited:
            visited.add(node)
            result.append(node)
            # Add neighbors in reverse to match recursive DFS order
            for neighbor in reversed(graph[node]):
                if neighbor not in visited:
                    stack.append(neighbor)
    
    return result

# SHORTEST PATH IN UNWEIGHTED GRAPH (BFS)
def shortest_path(graph, start, end):
    """Find shortest path using BFS - O(V + E)"""
    if start == end:
        return [start]
    
    visited = {start}
    queue = deque([(start, [start])])
    
    while queue:
        node, path = queue.popleft()
        
        for neighbor in graph[node]:
            if neighbor not in visited:
                new_path = path + [neighbor]
                if neighbor == end:
                    return new_path
                visited.add(neighbor)
                queue.append((neighbor, new_path))
    
    return []  # No path found

# SHORTEST DISTANCE IN UNWEIGHTED GRAPH (BFS)
def shortest_distance(graph, start, end):
    """Find shortest distance using BFS - O(V + E)"""
    if start == end:
        return 0
    
    visited = {start}
    queue = deque([(start, 0)])
    
    while queue:
        node, dist = queue.popleft()
        
        for neighbor in graph[node]:
            if neighbor not in visited:
                if neighbor == end:
                    return dist + 1
                visited.add(neighbor)
                queue.append((neighbor, dist + 1))
    
    return -1  # No path found

# BFS LEVEL ORDER TRAVERSAL
def bfs_levels(graph, start):
    """BFS with level tracking - O(V + E)"""
    visited = {start}
    queue = deque([(start, 0)])
    levels = defaultdict(list)
    
    while queue:
        node, level = queue.popleft()
        levels[level].append(node)
        
        for neighbor in graph[node]:
            if neighbor not in visited:
                visited.add(neighbor)
                queue.append((neighbor, level + 1))
    
    return dict(levels)

# CHECK IF PATH EXISTS
def has_path(graph, start, end):
    """Check if path exists from start to end - O(V + E)"""
    if start == end:
        return True
    
    visited = {start}
    queue = deque([start])
    
    while queue:
        node = queue.popleft()
        
        if node == end:
            return True
        
        for neighbor in graph[node]:
            if neighbor not in visited:
                visited.add(neighbor)
                queue.append(neighbor)
    
    return False

# FIND ALL PATHS (DFS)
def all_paths(graph, start, end, path=[]):
    """Find all paths from start to end - O(V! * E) worst case"""
    path = path + [start]
    
    if start == end:
        return [path]
    
    paths = []
    for neighbor in graph[start]:
        if neighbor not in path:  # avoid cycles
            new_paths = all_paths(graph, neighbor, end, path)
            paths.extend(new_paths)
    
    return paths

# DETECT CYCLE IN UNDIRECTED GRAPH (DFS)
def has_cycle_undirected(graph, n):
    """Detect cycle in undirected graph - O(V + E)"""
    visited = set()
    
    def dfs(node, parent):
        visited.add(node)
        for neighbor in graph[node]:
            if neighbor not in visited:
                if dfs(neighbor, node):
                    return True
            elif neighbor != parent:
                return True
        return False
    
    for node in range(1, n + 1):
        if node not in visited:
            if dfs(node, -1):
                return True
    
    return False

# DETECT CYCLE IN DIRECTED GRAPH (DFS)
def has_cycle_directed(graph, n):
    """Detect cycle in directed graph - O(V + E)"""
    visited = set()
    rec_stack = set()
    
    def dfs(node):
        visited.add(node)
        rec_stack.add(node)
        
        for neighbor in graph[node]:
            if neighbor not in visited:
                if dfs(neighbor):
                    return True
            elif neighbor in rec_stack:
                return True
        
        rec_stack.remove(node)
        return False
    
    for node in range(1, n + 1):
        if node not in visited:
            if dfs(node):
                return True
    
    return False

# TOPOLOGICAL SORT (DFS)
def topological_sort(graph, n):
    """Topological sort of directed acyclic graph - O(V + E)"""
    visited = set()
    stack = []
    
    def dfs(node):
        visited.add(node)
        for neighbor in graph[node]:
            if neighbor not in visited:
                dfs(neighbor)
        stack.append(node)
    
    for node in range(1, n + 1):
        if node not in visited:
            dfs(node)
    
    return stack[::-1]  # reverse to get topological order

# CONNECTED COMPONENTS (DFS)
def count_components(graph, n):
    """Count connected components in undirected graph - O(V + E)"""
    visited = set()
    count = 0
    
    def dfs(node):
        visited.add(node)
        for neighbor in graph[node]:
            if neighbor not in visited:
                dfs(neighbor)
    
    for node in range(1, n + 1):
        if node not in visited and node in graph:
            dfs(node)
            count += 1
    
    return count

# BIPARTITE CHECK (BFS)
def is_bipartite(graph, n):
    """Check if graph is bipartite (2-colorable) - O(V + E)"""
    color = [-1] * (n + 1)
    
    for start in range(1, n + 1):
        if color[start] == -1:
            queue = deque([start])
            color[start] = 0
            
            while queue:
                node = queue.popleft()
                
                for neighbor in graph[node]:
                    if color[neighbor] == -1:
                        color[neighbor] = 1 - color[node]
                        queue.append(neighbor)
                    elif color[neighbor] == color[node]:
                        return False
    
    return True