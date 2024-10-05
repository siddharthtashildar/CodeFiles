t = int(input())

for i in range(1,t+1):
    
    size = int(input())
    lst = list(map(int, input().split()))
    
    lst.sort()

    lst2 = lst.copy()
    mx = max(lst)

    x = lst2[0]
    y = lst2[1]
    lst2.remove(x)
    lst2.remove(y)

    temp = max(lst2) - min(lst2)

    if  temp < mx:
        mx = temp

    lst2 = lst.copy()

    lst2.pop(size - 1)
    lst2.pop(size - 2)

    temp = max(lst2) - min(lst2)

    if  temp < mx:
        mx = temp

    lst2 = lst.copy()
    a = max(lst2)
    b = min(lst2)

    lst2.remove(a)
    lst2.remove(b)

    temp = max(lst2) - min(lst2)

    if  temp < mx:
        mx = temp

    print(mx)