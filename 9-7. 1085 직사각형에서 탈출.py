L = list(map(int, input().split()))

#h-y, w-x, x, y를 비교해 가장 작은 값 출력
#L[0] = x, L[1] = y, L[2] = w, L[3] = h
#L[2]를 w-x로 대체, L[3]을 h-y로 대체

L[2]=L[2]-L[0]
L[3]=L[3]-L[1]

L=sorted(L) #오름차순으로 정렬

print(L[0])

