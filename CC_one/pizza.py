t = int(input())

for i in range(1,t+1):
    x = int(input())

    no_of_small = 0
    temp = 4

    if x >= 4:
        while temp < x:
            no_of_small =  (x % temp) * 2
            temp = temp * 2

    print(no_of_small)
