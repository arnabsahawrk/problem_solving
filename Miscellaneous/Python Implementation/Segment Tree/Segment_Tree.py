class SegmentTree:
    def __init__(self, arr):
        self.n = len(arr)
        self.tree = [0] * (4 * self.n)
        self._build(arr, 0, 0, self.n - 1)

    def _build(self, arr, node, start, end):
        if start == end:
            self.tree[node] = arr[start]
            return

        mid = (start + end) // 2
        self._build(arr, 2 * node + 1, start, mid)
        self._build(arr, 2 * node + 2, mid + 1, end)
        self.tree[node] = self.tree[2 * node + 1] + self.tree[2 * node + 2]

    def query(self, node, start, end, left, right):
        if end < left or start > right:
            return 0
        elif start >= left and end <= right:
            return self.tree[node]

        mid = (start + end) // 2
        leftSide = self.query(2 * node + 1, start, mid, left, right)
        rightSide = self.query(2 * node + 2, mid + 1, end, left, right)
        return leftSide + rightSide

    def update(self, node, start, end, i, v):
        if i < start or i > end:
            return
        if start == end:
            self.tree[node] = v
            return

        mid = (start + end) // 2
        self.update(2 * node + 1, start, mid, i, v)
        self.update(2 * node + 2, mid + 1, end, i, v)
        self.tree[node] = self.tree[2 * node + 1] + self.tree[2 * node + 2]
