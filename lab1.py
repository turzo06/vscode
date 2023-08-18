A = list(map(int, input().split()))
R1 = [(a, b) for a in A for b in A if b % a == 0]
R2 = [(a, b) for a in A for b in A if a <= b]
print("Relation R1:", R1)
print("Relation R2:", R2)
