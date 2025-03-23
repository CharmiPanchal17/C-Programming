import numpy as np

# Number of nodes (cities)
n = 7

# Initialize adjacency matrix with infinity (or a large number)
INF = float('inf')
adj_matrix = np.full((n, n), INF)

# Set diagonal to 0 (distance from a city to itself)
np.fill_diagonal(adj_matrix, 0)

# Add edges with weights
edges = [
    (1, 3, 10), (1, 7, 12), (2, 3, 8), (2, 4, 12),
    (3, 4, 11), (3, 5, 3), (3, 7, 10), (4, 5, 11),
    (5, 6, 6), (5, 7, 9), (6, 7, 9)
]

for u, v, w in edges:
    adj_matrix[u-1][v-1] = w  # Adjust for 0-based index
    adj_matrix[v-1][u-1] = w  # Since graph is undirected

# Display adjacency matrix
print("Adjacency Matrix:")
print(adj_matrix)
