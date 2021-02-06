N = int(input())
i = 2

while (N != 1): #최종적으로 N은 1이 됨 -> 소인수분해니까
    if (N % i == 0): 
        N = N/i #나누어지므로 N을 나눗셈한 값으로 저장
        print(i)
    else:
        i=i+1
