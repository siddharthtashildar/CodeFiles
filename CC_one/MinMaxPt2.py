

T = int(input())
    
for case in range(1,T+1):
    N = int(input())
    i = 1
    temp_sum = 1
    while(i <= N):
        # if i == N:    
        #     temp_sum = temp_sum + max(i,i-N)
        # else:
        #     temp_sum = temp_sum + max(i,N-i)
        temp_sum = temp_sum + max(i,N-i)
        i += 1
    print(temp_sum)