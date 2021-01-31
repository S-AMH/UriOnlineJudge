# -*- coding: utf-8 -*-
#Problem Number 1038

line = str(input(""))
split = line.split(" ")
code = int(split[0])
quantity = int(split[1])

priceList = (4, 4.5, 5,2, 1.5)

print("Total: R$ %.2lf"%float(priceList[(code-1)] * quantity))