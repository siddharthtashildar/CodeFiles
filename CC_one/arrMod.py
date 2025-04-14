

T = int(input())
    
for case in range(1,T+1):
    N = int(input())
    lst = list(map(int, input().split()))
    new_lst = []
    odd_lst = []
    even_lst = []
    count_even = 0
    count_odd = 0
    max_sum = 0
    for i in lst:
        if i%2 == 0:
            even_lst.append(i)
        else:
            odd_lst.append(i)

    for i in range(N):
        if i % 2 == 0:
            if len(even_lst) >= i:
                new_lst.append(1)
                #count_even += 1  
            else:
                new_lst.append(0)
                #count_odd += 1

        else:
            if len(odd_lst) >= i:
                new_lst.append(1)
                #count_odd += 1
            else:
                new_lst.append(0)
                #count_even += 1 

    #print(new_lst)
    for i in range(N):
        x = (new_lst[i] + (i+1)) % 2
        max_sum = max_sum + x
    
    print(max_sum)
