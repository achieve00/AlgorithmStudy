m, n = map(int, input().split())

def solution(m, n):
    for i in range(m, n+1):
        count = 0
    for j in range(1, i + 1):
        if i % j == 0:
            count += 1

    if count == 2:
        print(i)
        
print(solution(m, n))        
