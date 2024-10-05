

T = int(input())
    
for case in range(1,T+1):
    N = int(input())
    B = list(map(int, input().split()))

    count = 0
    count2 = 0
    for i in B:
        if i % 2 == 0:
            count += 1
        else:
            count2 +=1

    if count % 2 == 0 and count2 % 2 == 0:
        print("YES")
    # elif len(B) / 2 == count and len(B) / 2 == count2:
    #     if count % 2 == 0 and count2 % 2 == 0:
    #         print("YES")
    else:
        print("NO")
