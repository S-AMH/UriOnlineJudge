# -*- coding: utf-8 -*-
#Problem Number 1037

num = float(input(""))
intervals = ("[0,25]" ,"(25,50]", "(50,75]", "(75,100]")
if(num >= 0 and num <=25):
    print("Intervalo " + intervals[0])
elif(num > 25 and num <= 50):
    print("Intervalo " + intervals[1])
elif(num > 50 and num <= 75):
    print("Intervalo " + intervals[2])
elif(num > 75 and num <= 100):
    print("Intervalo " + intervals[3])
else:
    print("Fora de intervalo")