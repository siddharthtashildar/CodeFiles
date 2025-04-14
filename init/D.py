print("Nigga D")

T = int(input())
    
for case in range(1,T+1):
    N = int(input())
    main_list = set()
    final_list = []
    lst = []
    minStones = 10000000000
    for i in range(N):
        lst =  list(map(int, input().split()))
        main_list.update(lst[1: ])
        minStones = min(minStones,lst[0])

    print(len(main_list) - minStones)
