#9-1 1978번 소수 찾기

N = int(input()) #N은 입력값
count = 0
L = list(map(int, input().split())) #map이 각각의 요소에 함수(int)를 적용함.
#split은 뒤에 있는 것(여기선 공백)을 나눠줌 = 공백 별로 값 분리
    
for i in L: #i는 L의 각 원소 내가 자꾸 까먹어서 적어둠
    if (i == 1) :
        continue
    for j in range(2, i+1):
        if (i % j == 0):
            break

    if (i == j):
        count+=1

print(count)
        
