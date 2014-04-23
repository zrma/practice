input()
A = sorted(map(int, raw_input().split(' ')))
B = sorted(map(int, raw_input().split(' ')), reverse=True)
print sum(i * j for i, j in zip(A,B))
