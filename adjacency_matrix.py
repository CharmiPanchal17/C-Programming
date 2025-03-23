import numpy as np

# Number of cities
N = 7

INF = float('inf') # large number for no direct path
adj_matrix = np.array([
    [0, 12, 10, INF, INF, INF, 12],  # City 1
    [12, 0, 8, 12, INF, INF, INF],   # City 2
    [10, 8, 0, 11, 3, INF, 9],       # City 3
    [INF, 12, 11, 0, 11, 10, INF],   # City 4
    [INF, INF, 3, 11, 0, 6, 7],      # City 5
    [INF, INF, INF, 10, 6, 0, 9],    # City 6
    [12, INF, 9, INF, 7, 9, 0]       # City 7
])

# Print the adjacency matrix
print("Adjacency Matrix Representation of the Graph:")
print(adj_matrix)
