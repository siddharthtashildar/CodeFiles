#include <stdio.h>
#include <stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */


int* twoSum(int* nums, int numsSize, int target, int* returnSize) { 

    int *ans = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;
    
    for(int i = 0; i < numsSize; i++){

        if(!ans){

            return NULL;
        }
        
        for(int j = 0; j < numsSize; j++){

            if(i != j){

                if(nums[i] + nums[j] == target){
                    ans[0] = i;
                    ans[1] = j;
                    return ans;
                    break;
                }
            }
        }
    }
}

int main(){

    int nums[] = {3,3};
    int target = 6;

    int numsSize = sizeof(nums)/sizeof(nums[0]);

    
    int rSize = 2;
    int* returnSize = &rSize;

    int* answer = twoSum(nums,numsSize,target,returnSize);

    if(answer){

        printf("\nAnswer: %d %d\n",answer[0],answer[1]);
        free(answer);
    }


    return 0;
}