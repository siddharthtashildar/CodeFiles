
N = int(input())

list =  list(map(int, input().split()))

list2 = []

for i in list:
    X = i * 0.30
    Y = (65 - X) / 0.45
    # print(Y+1)
    temp = int(((Y+1) * 0.45) + X + (0.25 * 100))
    # print(temp)

    # if temp <= 100 or X <= 100:
    #     if Y < 0:
    #         list2.append(0)
    #     else:
    #         if temp >= 90:
    #             list2.append(int(Y+1))
    #         else:
    #             list2.append(-1)
    # else:
    #     list2.append(-1)
    if Y > 100:
        list2.append(-1)
    elif Y < 0:
        list2.append(0)
    else:
        list2.append(int(Y+1))

for j in list2:
    print(j , end = ' ')
