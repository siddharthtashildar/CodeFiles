
t = int(input())

def set1(a,b,c):
    match1 = min(a,b)
    a = a - match1
    b = b - match1

    match2 = min(b,c)
    b = b - match2
    c = c - match2

    match3 = min(c,a)
    c = c - match3
    a = a - match3

    if a>0 :
        return True
    else:
        return False



def set2(a,b,c):
    match1 = min(c,b)
    c = c - match1
    b = b - match1

    match2 = min(c,a)
    a = a - match2
    c = c - match2

    match3 = min(b,a)
    b = b - match3
    a = a - match3

    if a>0 :
        return True
    else:
        return False
    
def set3(a,b,c):
    match1 = min(a,c)
    a = a - match1
    c = c - match1

    match2 = min(c,b)
    b = b - match2
    c = c - match2

    match3 = min(b,a)
    b = b - match3
    a = a - match3

    if a>0 :
        return True
    else:
        return False
    


for i in range(1,t+1):
    lst = []
    lst2 = []
 

    lst = list(map(int, input().split()))
    
    a  = lst[0]
    b = lst[1]
    c = lst[2]

    if set1(a,b,c):
        print("YES")
    elif set2(a,b,c):
        print("YES")
    elif set3(a,b,c):
        print("YES")
    else:
        print("NO")

