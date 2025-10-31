import sys

n, m = map(int, sys.stdin.readline().split())
splitCount = (n-1) + (n * (m-1))

print(splitCount)