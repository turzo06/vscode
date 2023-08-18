from functools import partial


def get_degree(node, graph):
    return len(graph[node])


def get_degree_key(graph, node):
    return get_degree(node, graph)


def color_nodes(graph):
    color_map = {}

    # Consider nodes in descending degree
    sorted_nodes = sorted(graph, key=partial(
        get_degree_key, graph), reverse=True)

    for node in sorted_nodes:
        neighbor_colors = set(color_map.get(neigh) for neigh in graph[node])
        color_map[node] = next(
            color for color in range(len(graph)) if color not in neighbor_colors
        )

    return color_map


# Adjacency list
graph = {'a': list('bcd'), 'b': list('ac'), 'c': list(
    'abdef'), 'd': list('ace'), 'e': list('cdf'), 'f': list('ce')}
print(color_nodes(graph))
