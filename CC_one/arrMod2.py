

T = int(input())
    
for case in range(1,T+1):
    N = int(input())
    lst = list(map(int, input().split()))
    #new_lst = []
    odd = 0
    even = 0
    odd_i = 0
    even_i = 0
    max_sum = 0

    for i in lst:
        if i%2 == 0:
            even += 1
        else:
            odd += 1

    for i in range(1,N+1):
        if i % 2 == 0:
            even_i += 1 
        else:
            odd_i += 1
    # print("Even: ",even)
    # print("Odd: ",odd)
    # print("Odd I: ",odd_i)
    # print("Even I: ",even_i)
    
    #max_sum = min(odd_i,even) + min(even_i,odd)

    # print("Odd I: ",odd_i)
    # print("Even I: ",even_i)

    # for i in range(N):
    #     if even == N or odd == N:
    #         max_sum = N - 2
    #     elif even == odd:
    #          max_sum = N 
    #     else:
    #         if i % 2 == 0:
    #             if even >= i:
    #                 max_sum += 1


    #         else:
    #             if odd >= i:
    #                 max_sum += 1

    if even_i > odd:
        max_sum += odd
    else:
        max_sum += even_i
    
    if odd_i > even:
        max_sum += even
    else:
        max_sum += odd_i
    
    print(max_sum)
