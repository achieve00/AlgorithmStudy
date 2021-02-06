f=True
while f==True:
    N = int(input(""))
    cnt = 0
    if N==0: f==False
    for i in range(N, 2*N+1):
        count = 0
        if i == 1:
            continue
        for j in range(2, i + 1):
            if i % j == 0:
                count += 1
        if count == 1:
            cnt += 1
    print(cnt)