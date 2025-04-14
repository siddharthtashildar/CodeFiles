

T = int(input())
    
for case in range(1,T+1):

    N = int(input())
    P = str(input())
    C = str(input())
    K = []
    for i in range(N):
        temp = 0
        P_i = ord(P[i])
        C_i = ord(C[i])
        # print(P_i)
        # print(C_i)
        while True:
            if P_i == C_i:
                # print("First If -> ",P_i,'Temp -> ' , temp)
                K.append(temp)
                temp = 0
                break
            else:
                #if P_i <= 90 and P_i >= 65:
                P_i = P_i + 3
                if P_i > 90:
                    P_i = P_i - 26
                temp = temp + 1
                # print("If ->",P_i)
                # print("Char If ->",chr(P_i))
                # elif P_i > 90:
                #     P_i = (P_i + 3) - 90
                #     temp = temp + 1
                #     print("Else ->",P_i)
                #     print("Char ELse ->",chr(P_i))
                #     print("Temp Else ->",temp)
    for i in K:
        print(i,end=' ')
        