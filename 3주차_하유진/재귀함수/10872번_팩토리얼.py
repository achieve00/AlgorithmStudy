#재귀함수 : 어떤 함수에서 자신을 다시 호출하여 작업을 수행하는 방식의 함수를 의미한다.
n = int(input())
def fact(n) :
    if n == 1 :
        return 1
    elif n == 0 :
        return 0

    return n* fact(n-1)

print(fact(n))    
