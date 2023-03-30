# -*- coding: utf-8 -*-
#Problem Number 1042

line = str(input(""))
split = line.split(" ")

numbers = list()
for item in split:
    numbers.append(int(item))
numbers.sort()
for num in numbers:
    print(str(num))
print("")
for item in split:
    print(item)