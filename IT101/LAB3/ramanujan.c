#include <stdio.h>

int main(){

	int rama_no = 1729;
	int ic,jc,kc,lc;
	//printf("\n 1729 \n");
	int array[4];
	while(rama_no < 20000){
	
		for(int i = 1; i < 30 ; i++){
			for(int j = 1; j < 30 ; j++){
				for(int k = 1 ; k< 30 ; k++){
					for(int l = 1 ; l < 30 ; l++){
						ic = i*i*i;
						jc = j*j*j;
						kc = k*k*k;
						lc = l*l*l;
						
						if(i != j && i != k && i !=l && j != k && j != l && k != l && i > j && k > l && i > k ){
							if(ic + jc == kc + lc){
								
								rama_no = ic + jc;
								printf("\n %d \n",ic+jc);
	
							}
						}

					}
				
				}
			
			}
		
		}
	}
	return 0;
}
