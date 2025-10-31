import sys

repeat = int(input())
for i in range(repeat):
    n1, n2 = map(int, sys.stdin.readline().split())
    sum = n1 + n2
    print(f'Case #{i+1}: {n1} + {n2} = {sum}')