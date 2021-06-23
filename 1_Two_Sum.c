#include <stdio.h>

void Searching_Pair(int num[], int target){
    int pair = 0, result = 0;
    int i = 0, j = 0;
    for(i=0; i<4; i++){
        result = num[i] - target;
        if(result < 0)
            pair = result*(-1);
        else
            pair = result;
        for(j=i; j<4; j++){
            //printf("%d\n", num[j]);
            if(pair == num[j]){
                printf("%d, %d\n", num[i], num[j]);
            }
        }
    }
}

int main(){
    int num[4]={2, 7, 11, 15};
    int target = 13;

    Searching_Pair(num, target);
    printf("check\n");
}