

T = int(input())
    
for case in range(1,T+1):

    L = int(input())
    S = str(input())

    no_of_i = 0
    no_of_i2 = 0
    end_early = False

    for i in S:
        if i == '1':
            no_of_i += 1

    if '1' in S[0:L//2]:
        for i in S:
            if i == '1':
                no_of_i2 += 1 

    if '1' in S[0:1]:
        end_early = True

    
    percentage_i = (no_of_i / L) * 100
    percentage_i2 = (no_of_i2 / (L//2)) * 100

    if percentage_i >= 50:
        print("YES")
    elif percentage_i2 >= 50:
        print("YES")
    elif end_early:
        print("YES")
    else:
        print("NO")


