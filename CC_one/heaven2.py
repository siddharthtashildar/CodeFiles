

T = int(input())
    
for case in range(1,T+1):
    L = int(input())
    S = str(input())

    percentage = 0
    no_of_one = 0
    temp = 1
    x= False

    for i in S:
        if i == '1':
           no_of_one += 1
           percentage = (no_of_one / temp) * 100

           if percentage >= 50:
               print("YES")
               x = True
               break
        temp += 1
    
    if x ==False:
        print("NO")
