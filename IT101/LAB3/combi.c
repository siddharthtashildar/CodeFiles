#include <stdio.h>

int main(){
	
	printf("\nThree Digits Numbers with 1,2 & 3 without repeatations : \n");
	for(int i = 1 ; i <= 3;i++){
		for(int j = 1; j <= 3;j++){
			if(i == j){
				continue;
			}
			else{
				for(int k = 1 ; k <= 3 ; k++){
					if(j == k || k == i){
						continue;
					}
					else{
						printf("\n %d%d%d \n",i,j,k);
					}	
				}
			}
		}
	}
	return 0;
}
