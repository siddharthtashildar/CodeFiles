#include <stdio.h>

int main() {
	// your code goes here

    int T;
    int min_operations;
    int chk1=1;
    int chk2=1;

    printf("\nEnter T: ");
    scanf("%d",&T);

    for(int i =1 ; i <=T ;i++){

        int X;
        int Y;
        int temp1=0;
        int temp2=0;
        int temp3=0;
        int temp4=0;

        printf("\n ENter X & Y: ");
        scanf("%d %d",&X,&Y);

        if(X >= 2*Y || Y >= 2*X){
            min_operations = 0;
        }

        else if(X >= 2 && Y <=10){


            while(X < 2*Y || Y < 2*X){

                temp1 = 2*(Y + chk1);
                temp2 = 2*(X + chk1);
                temp3 = 2*(Y - chk2);
                temp4 = 2*(X - chk2);



                if(X >= temp1 || Y >= temp2 ){
                    min_operations = chk1;
                    break;
                    
                }
                else if(X >= temp3 || Y >=temp4 ){
                    min_operations = chk2;
                    break;
                }
                chk1 += 1;
                chk2 += 1;
            }
            
        }
        printf("%d\n",min_operations);
    }

    return 0;

}

