def color_nodes(graph):
    color_map = {}  # Dictionary to store node-color mapping

    # Iterate through nodes in descending order of degree
    for node in sorted(graph, key=lambda x: len(graph[x]), reverse=True):
        # Collect colors used by neighboring nodes
        neighbor_colors = {color_map.get(neigh) for neigh in graph[node]}

        # Assign the next available color to the current node
        color_map[node] = next(color for color in range(
            len(graph)) if color not in neighbor_colors)

    return color_map


# Adjacency list
graph = {
    'a': list('bcd'),
    'b': list('ac'),
    'c': list('abdef'),
    'd': list('ace'),
    'e': list('cdf'),
    'f': list('ce')
}
print(color_nodes(graph))
