import numpy as np

file_name = "number.txt"

with open(file_name) as f:
    lines = f.readlines()

lines = [line.rstrip('\n') for line in lines]

numbers = [list(map(int, x)) for x in lines]
    
num2 = np.array(numbers)
num = []

for i in range(1000):
    num.append(num2[0][i])

num = np.array(num)

for i in range(1000):
    target = num[i:i+4]
    print(target)
