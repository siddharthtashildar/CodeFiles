#include <stdio.h>
#include <stdlib.h>

#include <string.h> 
#include <stdbool.h>




bool checkTwoChessboards(char* coordinate1, char* coordinate2) {

    char black_series[4] = {'a','c','e','g'};
    char white_series[4] = {'b','d','f','h'};

    char letter1 = coordinate1[0];
    char numb1 = coordinate1[1];
    bool letter1_is_black = false;

    char letter2 = coordinate2[0];
    char numb2 = coordinate2[1];
    bool letter2_is_black = false;

    bool return_val = false;
    

    for(int i=0;i<=3;i++){ 

        if (letter1 == black_series[i]){
            for(int j =1; j <= 8 ; j++){
                if(j % 2 != 0){
                    if(numb1 == j + '0'){
                        letter1_is_black = true;   
                }
                }
            }
        }

        else if (letter1 == white_series[i]) { //)
            for(int k =1; k <= 8 ; k++){
                if(k % 2 == 0){
                    if(numb1 == k + '0'){
                        letter1_is_black = true;
                }
                }

            }
        }       
    }
    for(int a =0;a <=3;a++){

        if (letter2 == black_series[a]){
            for(int l =1; l <= 8 ; l++){
                if(l % 2 != 0){
                    if(numb2 == l + '0'){
                        letter2_is_black = true;
                    
                    }
                }

            }
        }
        else if (letter2 == white_series[a])  {
            
            for(int m =1; m <= 8 ; m++){
                if(m % 2 == 0){
                    if(numb2 == m + '0'){
                        letter2_is_black = true;                    
                }
                }

            }
        }
    }

       

    if (letter1_is_black && letter2_is_black){

        return_val = true;
        
    }
    else if(letter1_is_black == false && letter2_is_black == false){
        
        return_val = true;
        
    }
    else{
        return_val = false;
    }

    return return_val;
    
}



int main(){

    char test1[2] = "d1";
    char test2[2] = "h4";

    bool check = checkTwoChessboards(test1,test2);
    
    if(check){
        printf("\nTrue\n");
    }
    else{
        printf("\nFalse\n");
    }
    

    return 0;
}