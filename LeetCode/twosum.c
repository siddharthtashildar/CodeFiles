#include <stdio.h>
#include <stdlib.h>
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */


int* twoSum(int* nums, int numsSize, int target, int* returnSize) { //, 

    int *ans = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;
    
    for(int i = 0; i < numsSize; i++){

        if(!ans){

            return NULL;

        }
        
        for(int j = 0; j < numsSize; j++){
            if(nums[i] + nums[j] == target){

                ans[0] = nums[i];
                ans[1] = nums[j];
                
            }
        }

    }

    printf("\n%d  %d\n", ans[0],ans[1]);
    return ans;

}

int main(){

    int nums[] = {2,7,11,15};
    int target = 9;

    int numsSize = sizeof(nums)/sizeof(nums[0]);

    int* returnSize;
    //returnSize = 2;

    int* answer = twoSum(nums,numsSize,target,returnSize);

    if(answer){

        printf("\nAnswer: %d %d\n",answer[0],answer[1]);
        free(answer);
    }


    return 0;
}