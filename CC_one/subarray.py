

lst = []
lst2 = []
 
t = int(input())

for i in range(1,t+1):
    lst = []
    lst2 = []
 
    n = int(input())

    #lst  = int(input().split())
    lst = list(map(int, input().split()))
    size = len(lst)

    for j in range(size):
        for k in range(j+1,size+1):
            lst2.append(lst[j:k])
    
    temp = 0;

    for k in lst2:

        if sum(k) % 2 == 0:
            if len(k) > temp:
                temp = len(k)
    
    print(temp)
        