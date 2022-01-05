

void rotate(int* nums, int numsSize, int k){
    int i;
    int end = numsSize - 1;
    
    while(numsSize < k)
        k = k - numsSize;
    
    int *arr = malloc(sizeof(int) * k);
    
    for(i = 0 ; i < k ; i++)    // 옮겨야하는 갯수의 배열을 arr에 옮기기
        arr[k - 1 - i] = nums[end - i];
    
    for(i = end ; i >= k ; i--)  // 뒤에 빈 공간에 배열 옮기기
        nums[i] = nums[i - k];
    
    for(i = 0 ; i < k ; i++)
        nums[i] = arr[i];
    
    free(arr);
    return nums;
}
/*
void rotate(int* nums, int numsSize, int k){
    int i, j, temp;
    int end = numsSize - 1;
    
    for(i = 0 ; i < k ; i++){
        temp = nums[end];
        
        for(j = end ; j > 0 ; j--)
            nums[j] = nums[j - 1];
        
        nums[0] = temp;
    }
    return nums;
}*/