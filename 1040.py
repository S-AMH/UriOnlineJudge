# -*- coding: utf-8 -*-
#Problem Number 1040

import math

def decimalPointConverter(x,n):
    x = float(x)
    decimal = int(x * math.pow(10,n) - (int(x)*math.pow(10,n)))
    return(float(int(x) + (decimal/math.pow(10,n))))

def avg(x,w):
    mean = 0
    for i in range(0, len(x)):
        mean = x[i]*w[i] + mean
    return mean/math.fsum(w)

line = str(input(""))
split = line.split(" ")
marks = list()
for item in split:
    marks.append(decimalPointConverter(item,1))
weights = (2, 3, 4, 1)

media = decimalPointConverter(avg(marks,weights),1)
print("Media: " + str(media))
if(media >= 7.0):
    print("Aluno aprovado.")
elif(media < 5.0):
    print("Aluno reprovado.")
else:
    print("Aluno em exame.")
    num = decimalPointConverter(float(input("")),1)
    print("Nota do exame: " + str(num))
    if(decimalPointConverter(((num+media)/2),1) >= 5.0):
        print("Aluno aprovado.")
    else:
        print("Aluno reprovado.")
    print("Media final: " + str(decimalPointConverter(((num+media)/2),1)))
