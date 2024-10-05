t = int(input())

for i in range(1,t+1):
    
    size = int(input())

    #lst  = int(input().split())
    lst = list(map(int, input().split()))
    #lst2 = lst.copy()
    lst2 = list(lst)
    mx = max(lst2)

    for i in range(size):
        for j in range(size):
            if i != j:
                temp = max(lst2) - min(lst2)
                if temp < mx:
                    mx  = temp
                    #print(mx)

    for i in range(size):
        for j in range(size):
            if i != j:
                lst2.pop(i)
                temp = max(lst2) - min(lst2)
                if temp < mx:
                    mx  = temp
                #lst2 = lst.copy()
                lst2 = list(lst)


    for i in range(size):
        for j in range(size-1):
            if i != j:
                lst2.pop(i)
                lst2.pop(j)
                temp = max(lst2) - min(lst2)
                if temp < mx:
                    mx  = temp
                #lst2 = lst.copy()
                lst2 = list(lst)

    print(mx)