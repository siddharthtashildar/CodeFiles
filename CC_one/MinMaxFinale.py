

T = int(input())
    
for case in range(1,T+1):
    N = int(input())
    i = N - 1
    #temp_sum = (2*N) + ((((i*(i+2)) // 2)) - 2) 
    #temp_sum = ((N*(N + 2))//2) + (N - 1 ) 
    temp_sum = N + (( N*(N+1) )// 2) - 1      
    print(temp_sum)