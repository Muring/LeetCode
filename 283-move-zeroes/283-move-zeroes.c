

void moveZeroes(int* nums, int numsSize){
    int count = 0, i = 0, j = 0;
    int arr[numsSize];
    
    while(i != numsSize){
        if(nums[i] != 0){
            arr[j] = nums[i];
            j++;
        }
            
        else
            count++;
        i++;
    }
    
    for(i = j ; i < j + count ; i++)
        arr[i] = 0;

    for(i = 0 ; i < numsSize ; i++)
        nums[i] = arr[i];
    
    return nums;
}