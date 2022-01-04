int search(int* nums, int numsSize, int target){
    int i;
    int count = 0;
    int ans;
    
    for(i = 0 ; i < numsSize ; i ++){
        if(nums[i] == target){
            count = 1;
            ans = i;
            break;
        }
    }
    if(count == 1)
        return ans;
    else
        return -1;
}