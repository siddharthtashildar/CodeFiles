

T = int(input())
    
for case in range(1,T+1):
    N = int(input())
    temp = 0
    temp_list = []
    rnge = 2**N
    i = 1
    modulo = (10**9) + 7
    # # for i in range(0, 2**N):
    # #     a = i ^ (i + 1)
    # #     b = (i+2)^(i+3)
    # #     if a == b:
    # #         temp_list.append(i)
    while(i <= rnge):
        # a = i ^ (i + 1)
        # b = (i+2)^(i+3)
        if i ^ (i + 1) == (i+2)^(i+3):
            # print("I--> ",i)
            temp += 1  
        i += 1

    #print(len(temp_list))
    print(temp % modulo)
    #print(temp % (7 * (10**9)))