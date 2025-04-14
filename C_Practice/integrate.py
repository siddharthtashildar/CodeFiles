

Sum = 0

lowerLimit = 0
upperLimit = 10

temp = (upperLimit - lowerLimit) / 1000
# for i in range(lowerLimit,upperLimit):

for i in range(1,1001):
    x = lowerLimit + i * temp 
    Sum += x * temp

print(Sum)
