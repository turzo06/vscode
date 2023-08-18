
def create_relation_matrix():
    matrix = [[0 for b in range(l)] for a in range(l)]
    for a in A:
        for b in B:
            if (a, b) in R:
                matrix[a - 1][b - 1] = 1
    return matrix


A = list(map(int, input().split()))
B = list(map(int, input().split()))
l = max(len(A), len(B))
R = [(a, b) for a in A for b in B if a > b]
print("The Relation R:", R)
Matrix = create_relation_matrix()
print("The matrix is:")
for a in Matrix:
    for b in a:
        print(b,end=' ')
    print()
