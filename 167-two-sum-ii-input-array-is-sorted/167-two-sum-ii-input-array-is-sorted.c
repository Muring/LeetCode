

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize){
    int i, j;
    
    *returnSize = 2;
    int *arr = malloc(sizeof(int) * 2);
    
    for(i = 0 ; i < numbersSize - 1 ; i++){
        for(j = i + 1 ; j < numbersSize ; j++){
            if(numbers[i] + numbers[j] == target){
                arr[0] = i+1;
                arr[1] = j+1;
            }
        }
    }
    return arr;
}