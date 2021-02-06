N=int(input())  #첫 번째 장대에 쌓인 원판의 개수 (1<=N<=20)
def hanoi(n, a, b, c):
    if n==1:
        print(a, c)
    else:
        hanoi(n-1, a, b,c)
        print(a, c)
        hanoi(n-1, b, a,c)
    sum = 1
    for i in range(N - 1):
        sum = sum * 2 - 1


print(sum)
hanoi(N, 1, 2, 3)


'''
원판의 개수가 홀수 일 때는 1번 원판을 <나중 상태>인 옮기려는 기둥(3번)에 놓고, 
원판의 개수가 짝수 일 때는 1번 원판을 나머지 기둥(2번)으로옮긴다.
'''