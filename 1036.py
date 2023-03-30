# -*- coding: utf-8 -*-
#Problem Number 1036

from math import sqrt

line = str(input(""))
split = line.split(" ")
a = float(split[0])
b = float(split[1])
c = float(split[2])
try:
    delta = sqrt((b*b)-(4*a*c))
    print("R1 = %.5lf"%(((-1)*b + delta)/(2*a)))
    print("R2 = %.5lf"%(((-1)*b - delta)/(2*a)))
except:
    print("Impossivel calcular")