

int search(int* nums, int numsSize, int target){
    int start = 0;
    int end = numsSize - 1;
    int mid;
    int count = 0;
    
    while(start <= end){
        mid = (start + end) / 2;
        
        if (nums[mid] == target){
            count = 1;
            break;
        }
        else if(nums[mid] > target)
            end = mid - 1;
        else
            start = mid + 1;
    }
    
    if(count == 1)
        return mid;
    else
        return -1;
}