
# print("Nigga")
T = int(input())
    
for case in range(1,T+1):
    
    a = int(input())
    c =True
    b = 1
    while c:
        if a & b > 0 and a ^ b > 0:
            print(b)
            c = False
            break
        b = b + 1
