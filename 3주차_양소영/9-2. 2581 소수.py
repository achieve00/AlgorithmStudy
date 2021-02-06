#9-2 2581번 소수 찾기

M = int(input())
N = int(input())
k = M
sum = 0
mini = -1

while (k < N+1): #k가 M~N까지 아래 반복
    for i in range(2, k+1) : #소수 찾기
        if (k % i == 0):
            if (k == i):
                if sum == 0: #만약 sum이 0이다 = 한번도 더해지지 x
                    mini = k #mini=제일 작은 소수, sum이 0일때 찾을 수 있는 소수
                sum += k 
            else:
                break
    k+=1 #계속 더해주며 반복

if sum == 0: #sum=0 -> 소수가 없다
    print(mini)

else:
    print(sum)  
    print(mini)
