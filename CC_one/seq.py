

T = int(input())
    
for case in range(1,T+1):
    N = int(input())
    B = list(map(int, input().split()))

    for i in range(len(B)):
        for j in range(len(B)):
            if i != j:
                X = False
                while X == False:
                    a = B[i] + B[j]
                    for h in range()