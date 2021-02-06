def fact_num(a):
    if (a>1):
        return a*fact_num(a-1) #그 전 fact_num안의 a와 곱해주기~
    else:
        return 1

num = int(input())
print(fact_num(num))
