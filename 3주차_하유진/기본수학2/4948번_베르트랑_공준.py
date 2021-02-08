n = int(input())
res = 0
def solution(n):
    for i in range(n, (2 * n) + 1):
        count = 0
        for j in i + 1:
            if i % j == 0:
                count += 1
        if count == 2 :
            res += 1

    print(res)                  
