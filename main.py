import pandas as pd #pandas 라이브러리 불러오기
# noinspection PyUnresolvedReferences
import numpy as np  #
import matplotlib.pyplot as plt #산점도를 출력하기 위한 라이브러리
# noinspection PyUnresolvedReferences
import sympy as sp  #미분 및  변수 설정

df=pd.read_csv('data.csv', encoding='euc-kr')
data =np.array(df)

#데이터를 입력 변수와 출력변수로 나누기
X=data[:, 1]
Y=data[:, -1]

#p와 q로 편미분 하기 위해 심볼 설정
p=sp.symbols('p')
q=sp.symbols('q')

Yk=[]   #예측값
ek=[]   #오차
Ck=[]   #비용함수

for i in X:
    Yk.append(i*p+q)

for i in range(len(Yk)-1):
    ek.append(Y[i]-Yk[i])

for i in range(len(ek)-1):
    a=ek[i]**2
    Ck.append(0.5*a)
print(Ck)
Ct=sum(Ck)

dif_p=sp.diff(Ct, p)
dif_q=sp.diff(Ct, q)

print(dif_p)
print(dif_q)

Result=sp.solve((dif_p, dif_q), dict=True)  #연립 방정식

print(Result)
plt.plot(X, Y, 'o')
plt.show()