t = int(input())

for i in range(1,t+1):
    lst = []

    lst = list(map(int, input().split()))
    
    N = lst[0]
    M = lst[1]

    if N > M:
        print(2 * M + 1)
    else:
        print(-1)