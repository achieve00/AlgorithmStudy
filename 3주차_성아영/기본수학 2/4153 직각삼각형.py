import math
x='\0'
y='\0'
z='\0'
while (x!=0 and y!=0 and z!=0):
    x, y, z = sorted(map(int, input().split()))
    if x==0 and y==0 and z==0: break
    if (x**2+y**2==z**2):
        print("right")
    else:
        print("wrong")