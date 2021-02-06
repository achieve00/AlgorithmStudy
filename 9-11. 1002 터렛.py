import math

num = int(input())

for i in range(num):
    
    L = list(map(int, input().split()))

    a = (L[0]-L[3])**2 
    b = (L[1]-L[4])**2

    d = math.sqrt(a+b) #조규현과 백승환 사이의 거리

    if (d == L[2]+L[5]): #만약 조-백 사이 거리가 r1과 r2의 합과 같다면
        print(1) #터렛이 존재하는 위치는 1개. -> 둘의 원이 맞닿아 있기 때문
    elif (d > L[2]+L[5] or ((L[0] == L[3] and L[1] == L[4]) and L[2] != L[5])):
        print(0) #터렛이 존재하는 위치는 0개. -> 둘의 원이 떨어져 있음 or 포함 관계임
    elif (d < L[2]+L[5]):
        print(2) #터렛이 존재하는 위치는 2개. -> 둘의 원이 겹쳐 있기 때문
    else :
        print(-1)
