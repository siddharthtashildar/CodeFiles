
lst = []
lst2 = []
 
n = int(input())

lst  = input().split()
size = len(lst)

for i in reversed(lst):
    if i not in lst2:
        lst2.append(i)

lst2.reverse()

print(len(lst2))
for i in lst2:
    print(i,end = ' ')
