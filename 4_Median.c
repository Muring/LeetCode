#include <stdio.h>
#include <stdlib.h>

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int len = nums1Size + nums2Size;
    int count;
    int i, j, k;
    double ans;

    for(i=0;i<nums1Size;i++){
        for(j=0;j<nums2Size;j++){
            if(nums1[i]==nums2[j])
                len--;   
        }
    }

    if(len == 0)
        return nums1[0];
    else{
        int arr[len];
        
        for(i=0;i<nums1Size;i++)
            arr[i]=nums1[i];
        
        for(j=0;j<nums2Size;j++){
            count = 0;
            for(k=0;k<nums1Size;k++){
                if(nums2[j] == nums1[k]){
                    count++;
                    break;
                }
            }
            if(count == 0){
                arr[i] = nums2[j];
                i++;
            }
        }
    
        //sort
        int flag, temp;
        for(i=0; i<len; i++){
            flag = i;
            for(j=i+1; j<len; j++){
                if(arr[flag] > arr[j])
                    flag = j;
            }
            temp = arr[i];
            arr[i] = arr[flag];
            arr[flag] = temp;
        }
        for(i = 0; i<len; i++)
            printf("%d", arr[i]);
        
            if(len%2 == 0){
                ans = (arr[len/2-1]+arr[len/2])/2.0;
                return ans;
            }
            else if(len%2 != 0)
                return arr[len/2];
        }
    return 0;
}

int main(){
    int nums1[5]={0,0,0,0,0};
    int nums2[7]={-1,0,0,0,0,0,1};

    printf("%f\n", findMedianSortedArrays(nums1, 5, nums2, 7));
}