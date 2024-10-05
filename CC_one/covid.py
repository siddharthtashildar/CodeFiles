

T = int(input())
    
for case in range(1,T+1):
    N,D = list(map(int, input().split()))
    # print(N)
    # print(D)
    infected_people = 1
    #if infected_people < N and infected_people != N:
    for i in range(0 , D+1):
        #print(infected_people)
        if i == 0:
        
            infected_people = 1

        elif i <= 10:
            
            infected_people = infected_people * 2

        else:
            
            infected_people = infected_people * 3
    
    if infected_people > N:
        print(N)
    else:
        print(infected_people)
    
    infected_people = 0
