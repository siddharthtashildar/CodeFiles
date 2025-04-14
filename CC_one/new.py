n=int(input())
for i in range(n):
    x=input()
    l=len(x)
    if l>10:
        print(x[0]+str(l-2)+x[-1])
    else:
        print(x)