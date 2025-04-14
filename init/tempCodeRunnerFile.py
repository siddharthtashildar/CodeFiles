
N = int(input())

list =  list(map(int, input().split()))

for i in list:
    X = i * 0.30
    Y = (65 - X) // 0.45
    # print(Y+1)
    temp = ((Y+1) * 0.45) + X + (0.25 * 100)
    # print(temp)
    if int(temp) >= 90:
        print(int(Y+1))
    else:
        print(-1)
