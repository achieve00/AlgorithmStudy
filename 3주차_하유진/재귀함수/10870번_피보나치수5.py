n = int(input())

def fibo(n) :
    if n == 0:
        return 0

    elif n == 1:
        return 1
    
    return n + fibo(n-1)

print(fibo(n))    
