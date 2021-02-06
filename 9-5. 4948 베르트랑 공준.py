while(1):
    N = int(input())

    if (N == 0):
        break
    k = 2*N
    N+=1 #N이 제일 처음에 소수일 때를 대비해 1 더해 계산함. 애초에 N(입력값)보다 큰 수에서 소수를 구하기 때문

    count=0

    while (N < k+1):
        for i in range(2, N+1) : #소수 찾기
            if (N % i == 0):
                if (N == i):
                    count+=1
                else:
                    break
        N+=1 #계속 더해주며 반복

    print(count)
