import sys

A, B = map(int, sys.stdin.readline().split())
C = int(input())

C_hour = C//60
C_min = C % 60

B = B + C_min
if B >= 60:
    A += B // 60
    B %= 60
A = (A + C_hour) % 24

print(f"{A} {B}")