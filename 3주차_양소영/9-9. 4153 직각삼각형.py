while(1):

    L = list(map(int, input().split()))
    sorted(L) #낮은 값 순서로 리스트 정렬 = 오름차순 정렬
    if (L[0] == 0 and L[1] == 0 and L[2] == 0):
        break

    elif (L[0]**2 + L[1]**2 == L[2]**2):
        print("right")

    else:
        print("wrong")
