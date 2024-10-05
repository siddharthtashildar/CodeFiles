

T = int(input())
    
for case in range(1,T+1):
    N,M = list(map(int, input().split()))

    S = input()
    K  = input()

    #lst2 = []

    # for j in range(N):
    #     for k in range(j+1,N+1):
    #         if abs(j - k) == M:
    #             lst2.append(S[j:k])

    temp = 0
    temp2 = 9999999

    for i in range(N-M+1):
        temp = 0
        for j in range(M):
            if S[i+j] != K[j]:
                N = abs(ord(S[j+i]) - ord(K[j]))
                if N > 5:
                    N =10-N
                temp += N

        temp2 =min(temp2,temp)

    print(temp2)


        