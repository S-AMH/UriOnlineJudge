# -*- coding: utf-8 -*-
#Problem Number 1041

line = str(input(""))
split = line.split(" ")
x = float(split[0])
y = float(split[1])

if(x == 0 and y == 0):
    print("Origem")
elif(y == 0):
    print("Eixo X")
elif(x == 0):
    print("Eixo Y")
elif(x > 0 and y > 0):
    print("Q1")
elif(x < 0 and y > 0):
    print("Q2")
elif(x < 0 and y < 0):
    print("Q3")
else:
    print("Q4")