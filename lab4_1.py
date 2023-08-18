INF = float(1e9)
def floyd_warshall(vertex, adjacency_matrix):
    dist = [[adjacency_matrix[i][j]
             for j in range(vertex)] for i in range(vertex)]
    for k in range(vertex):
        for i in range(vertex):
            for j in range(vertex):
                dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j])

    print("Shortest distances between all pairs of vertices:")
    for i in range(vertex):
        for j in range(vertex):
            if dist[i][j] == INF:
                print("INF", end=" ")
            else:
                print(dist[i][j], end=" ")
        print()

adjacency_matrix = [
    [0, 5, INF, 10],
    [INF, 0, 3, INF],
    [INF, INF, 0, 1],
    [INF, INF, INF, 0]
]
vertex = 4
floyd_warshall(vertex, adjacency_matrix)
