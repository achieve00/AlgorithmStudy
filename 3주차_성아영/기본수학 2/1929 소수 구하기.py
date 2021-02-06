M=list(map(int, input().split()))

decimal_list=[]

for i in range(M[0], M[1]+1):
    f = 0
    for j in range(2, i+1):
        if i%j==0:
            f+=1
    if f==1:
        decimal_list.append(i)

for j in range(0, len(decimal_list)):
    print(decimal_list[j])