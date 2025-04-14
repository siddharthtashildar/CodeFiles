

T = int(input())
    
for case in range(1,T+1):
    N = int(input())

    vault = ['a','b','c']
    word = ''
    temp = 0
    for i in range(N):
        if i < 3:
            word = word + vault[i]
        else:
            if temp > 2:
                temp = 0
            if temp < 3:
                word = word + vault[temp]
                temp +=1
            else:
                temp = 0
        
    print(word)