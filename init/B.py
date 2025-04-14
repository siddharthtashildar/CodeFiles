# print("Nigga B")
T,B = list(map(int, input().split()))

M = int(input())
    
for i in range(1,M+1):
    x,y = list(map(int, input().split()))

    # if x <= T and x >= 0 and x <= B and x <= T-B and y <= T and y >= B and y >= 0 and y >= T-B:
    #     print("YES")
    # else:
    #     print("NO")

    if ((x + y >= B) and (y - x <= B) and (x + y <= 2 * T - B) and (y - x >= - B)) :
        print("YES")
    else:
        print("NO")
        
    