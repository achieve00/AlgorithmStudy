m = int(input())
n = int(input())
add = 0
min = 0 
res = 0

for i in range(m, n+1):
    count = 0
    for j in range(1, i + 1):
        if i % j == 0:
            count += 1

    if count == 2:
        res += 1
        add += i        
        if min > i:
            min = i

if res == 0:
    print('-1')
else:
    print(add)
    print(min)

