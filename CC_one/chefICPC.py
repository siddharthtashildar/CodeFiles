

t = int(input())

for i in range(1,t+1):

    lst = []

    lst = list(map(int, input().split()))

    M  = lst[0]
    P  = lst[1]
    temp_penalty = 0
    max_attempts = 0

    for j in range(M,299):

        temp_penalty += 20
        final_penalty = temp_penalty + P + j + 1
        if final_penalty <= 1000:
            max_attempts += 1
            #print(final_penalty)

    print(max_attempts)
