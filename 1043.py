# -*- coding: utf-8 -*-
#Problem Number 1043

line = str(input(""))
split = line.split(" ")
a = float(split[0])
b = float(split[1])
c = float(split[2])

if a + b > c and b + c > a and a + c > b:
    print("Perimetro = %.1lf"%(a+b+c))
else:
    print("Area = %.1lf"%(((a+b)/2)*c))