def sosu(a): #소수 판독 함수 <- 귀찮아서 만들었음 소주아님
    for j in range(2, a+1):
        if (a % j == 0):
            if (a == j):
                return 1
            else:
                break # @@참고!! break가 없으면 4+4 요지랄난다

input_num = int(input())

for m in range(input_num):
        
    num = int(input())
    i = 2
    cha=[-1, -1, -1] #cha[0]은 두 수의 차 저장, cha[1]+cha[2] <- 출력값(골드바흐 파티션)
    cha[0] = 10001 #초기화

    while(1):
        if(num == i): #수가 같으면 break <- 더 돌면 큰일남
            break
        elif sosu(i): #i가 소수라면
            k = num - i #일단 빼준다
            if sosu(k): #빼준 수=k도 소수라면
                if abs(i - k) < cha[0]: #차끼리 비교
                    cha[0] = abs(i - k) #차가 더 작은 쪽을 저장함
                    if (i < k): #작은 수 부터 출력하기 위해 비교
                        cha[1]=i
                        cha[2]=k
                    else: #작은 수 부터 출력하기 위해 비교
                        cha[1]=k
                        cha[2]=i
        i+=1 #i를 ++

    print("%d %d" %(cha[1], cha[2]))
