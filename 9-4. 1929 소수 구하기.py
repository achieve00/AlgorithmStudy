L = list(map(int, input().split()))
k = L[0]

while (k < L[1]+1): #k가 M~N까지 아래 반복
    for i in range(2, k+1) : #소수 찾기
        if (k % i == 0):
            if (k == i):
                print(k) 
            else:
                break
    k+=1 #계속 더해주며 반복
