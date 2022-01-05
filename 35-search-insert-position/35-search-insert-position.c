

int searchInsert(int* nums, int numsSize, int target){
    int i, ans = 0, count = 0;
    for(i=0;i<numsSize;i++){
        if(nums[i] == target){
            ans = i;
            count ++;
        }
    }
    if( count == 0 ){
        for(i=0;i<numsSize;i++){
            if(nums[i]<target) ans = i+1;
        }
    }
    
    return ans;
}