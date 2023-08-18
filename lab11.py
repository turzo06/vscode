with open("input.txt", "r") as Myfile:
 s = list(map(int, Myfile.readlines()))
print("S=", s)
R1, R2 = set(), set()
for a in s:
    for b in s:
        if b % a == 0:
            R1.add((a, b))
        if a <= b:
            R2.add((a, b))
print("The pair list is for b/a : ", R1)
print("The pair list is for a<=b : ", R2)
