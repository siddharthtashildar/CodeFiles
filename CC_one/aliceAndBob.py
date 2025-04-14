

T = int(input())
    
for case in range(1,T+1):
    N = int(input())
    lst = list(map(int, input().split()))

    temp_lst = []
    

    for i in range(N):
        if i == 0:
            temp_lst.append(abs(lst[i] - lst[i + 1]))
        elif i == N-1:
            temp_lst.append(abs(lst[i] - lst[i - 1]))
        else:
            a = i + 1
            b = i - 1
            y = abs(lst[i] - lst[a])
            z = abs(lst[i] - lst[b])
            x = max(y,z)
            temp_lst.append(x)
            # print("Y - ",y)
            # print("Z - ",z)
            # print("X - ",x)
            #temp_lst.append(max(y,z))
            # temp_lst.append(z)
            # temp_lst.append(y)
    #temp_lst.sort()
    #print(temp_lst[len(temp_lst)//2])
    # print(temp_lst)
    print(min(temp_lst))