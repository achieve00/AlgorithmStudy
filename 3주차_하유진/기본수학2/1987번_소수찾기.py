n = int(input())
n_list = list(map(int, input().split(' '))) #n을 기준으로 분리해서 리스트에 넣음
res = 0 #소수의 개수

if len(n_list) == n:
    for i in n_list:
        count = 0 #나누어지는 수의 갯수
        for j in i + 1:
            if i % j == 0:
                count += 1 
        if count == 2 : #1과 자기자신으로 나누어진다면 count는 2개임으로 
            res += 1        

print(res)