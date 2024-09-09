#include <stdio.h>

int main(){

    int T;
    
    //printf("\nEnter T: ");
    scanf("%d",&T);

    for(int i = 1; i <= T ; i++){

        int N;
        int K;
        //printf("\n Enter N & K: ");
        scanf("%d %d",&N,&K);

        //printf("\nN: %d\n",N);


	    int array[N];
        int new_array[N];

        for(int j =0 ; j < N ; j++){
            //printf("\n ENter element: ");
            scanf("%d",&array[j]);
        }
        for(int k = 0; k<K;k++){
            int great = array[0];
	        int least = array[0];
            int least_pos = 0;
            int great_pos = 0;
            int new_item;
            int indice = 0;
            
	
	        int len = sizeof(array)/sizeof(array[0]);
	
	        for(int n = 0; n < len ; n++){
		        if (array[n] > great){
			        great = array[n];
                    great_pos = n;
		        }
	        }
	        for(int o =1 ; o < len ; o++){
		        if (array[o] < least){
			        least = array[o];
                    least_pos = o;
		        }
	        }
            new_item = great + least;
            //printf("\nGReat: %d\n",great);
            //printf("\nleast: %d\n",least);
            //printf("\nnew: %d\n",new_item);

            for(int p=least_pos-1; p<N-1; p++)
            {
                array[p] = array[p + 1];
            }
            N--;
            /*for(int q=great_pos-1; q<N-1; q++)
            {
                array[q] = array[q + 1];
            }*/

           for(int r = 0; r < N; r++){
            if(array[r] != great){
                new_array[indice] = array[r];
                indice = indice + 1;
            }
           }
            new_array[indice] = new_item;
        }
        //printf("\nNew Array:  \n");
        for (int m = 0; m < N; m++)
        {
            printf("%d ",new_array[m]);
        }
        
    }



	return 0;
}
