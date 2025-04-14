

T = int(input())
    
for case in range(1,T+1):
    N = int(input())
    modulo = (10**9) + 7
    x = (2**(N-1)) % modulo
    print(x)
