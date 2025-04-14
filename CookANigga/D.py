

N = int(input())

lst =  list(map(int, input().split()))

size = sum(lst)

for i in range(2,size):
    if size % i == 0:
        print(i-1)
        break


# for i in range(len(lst)):
