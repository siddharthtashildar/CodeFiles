

T = int(input())
    
for case in range(1,T+1):
    
    N = int(input())
    S = str(input())
    D = ['N','W','S','E']
    temp = 'N'
    found = False
    for j in range(N):
        if found == False:
            for k in range(j+1,N+1):
                lst = S[j:k]
                l = len(lst)
                # print("THE SUB ARRAY: ",lst)
                for p in range(len(lst)):
                    if lst[0] != 'L':
                        if lst[p] == 'L':
                            # print("In IF MF!!")
                            # print("In IF Index: ",(p-1)%4)
                            temp = D[(p-1)%4]
                        else:
                            # print("ITS ELSE NIGGA!")
                            # print("In ELse Index: ",(p+1)%4)
                            temp = D[((p+1)%4)]
                            # if p+1 < l-1:
                            #     temp = D[(p+1%4)]
                            # else:
                            #     temp = D[4-(p+1)]
                        # print("TEMP: ",temp)
                    else:
                        # print("NEW ELSE")
                        if lst[p] == 'L':
                            # print("In IF2 MF!!")
                            # print("In IF2 Index: ",(p+1)%4)
                            temp = D[(p+1)%4]
                        else:
                            # print("ITS ELSE2 NIGGA!")
                            # print("In ELse2 Index: ",(p-1)%4)
                            temp = D[((p-1)%4)]
                            # if p+1 < l-1:
                            #     temp = D[(p+1%4)]
                            # else:
                            #     temp = D[4-(p+1)]
                        # print("TEMP2: ",temp)

                # print(temp)
                if temp == 'S':
                    print("YES")
                    found = True
                    break

    if found == False:
        print("NO")
                    
