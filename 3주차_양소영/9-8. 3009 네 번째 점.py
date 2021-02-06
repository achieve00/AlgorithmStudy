L1 = list(map(int, input().split()))
L2 = list(map(int, input().split()))
L3 = list(map(int, input().split()))
L4 = [-1, -1] #L4 초기화

for i in range(2): #직각사각형은 가로 세로 당 같은 숫자가 두 개씩 쌍으로 나옴을 이용

    if (L1[i] != L2[i]): 
        a = L1[i]
        b = L2[i]

        if (a != L3[i]):
            L4[i] = a
        else:
            L4[i] = b

    else :
        L4[i] = L3[i]

print("%d %d" %(L4[0],L4[1]))
