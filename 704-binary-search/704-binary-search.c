int search(int* nums, int numsSize, int target){
    int i;
    int count = 0;
    
    for(i = 0 ; i < numsSize ; i ++){
        if(nums[i] == target){
            count = 1;
            break;
        }
    }
    if(count == 1)
        return i;
    else
        return -1;
}