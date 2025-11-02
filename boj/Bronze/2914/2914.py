import sys

A, I = map(int, sys.stdin.readline().split())

# roundup(x / A) = I
# x = I * A ... (I - 1) * A + 1

M = (I - 1) * A + 1
print(M)