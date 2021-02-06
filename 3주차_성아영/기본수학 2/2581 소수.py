M=int(input())
N=int(input())

decimal_list=[]

for i in range(M, N+1):
    f = 0
    for j in range(2, i+1):
        if i%j==0:
            f+=1
    if f==1:
        decimal_list.append(i)


if len(decimal_list)!=0:
    print(sum(decimal_list))
    print(decimal_list[0])
else:
    print('-1')