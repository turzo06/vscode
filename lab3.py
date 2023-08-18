def matrix_union(matrix1, matrix2):
    union_result = [[matrix1[i][j] or matrix2[i][j]
                     for j in range(len(matrix1[0]))] for i in range(len(matrix1))]
    return union_result

def matrix_exclusive_or(matrix1, matrix2):
    xor_result = [[matrix1[i][j] ^ matrix2[i][j]
                   for j in range(len(matrix1[0]))] for i in range(len(matrix1))]
    return xor_result

R1 = [[1, 0, 1],
      [1, 0, 0],
      [0, 1, 1]]

R2 = [[1, 0, 1],
      [0, 1, 1],
      [1, 0, 1]]

MR1_xor_R2 = matrix_exclusive_or(R1, R2)
MR1_union_R2 = matrix_union(R1, R2)

print("First Matrix =", R1)
print("Second Matrix =", R2)
print("Rows =", len(R1), "Cols =", len(R1[0]))
print("Matrix Union MR1 ∪ R2:", MR1_union_R2)
print("Matrix Exclusive OR MR1⊕ R2:", MR1_xor_R2)
