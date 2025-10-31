# Solution 1: n1, n2 모두 받자마자 int로 변환
n1 = int(input())
n2 = int(input())

print(n1*(n2%10))
print(n1*((n2//10)%10))
print(n1*(n2//100))
print(n1*n2)


# Solution 2: n1은 받자마자 int로 변환, n2는 문자열로 취급
n1 = int(input())
n2 = input()

print(n1*(int(n2[2])))
print(n1*(int(n2[1])))
print(n1*(int(n2[0])))
print(n1*int(n2))