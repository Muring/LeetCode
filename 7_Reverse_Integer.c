#include <stdio.h>
#include <math.h>

int reverse(int x){
    int quot = x, rest = 0, result = 0;
    if(x>2147483647 || x<-2147483648) return 0;
    else{
        while(quot != 0){
        result = result * 10;
        rest = quot % 10;
        result += rest;
        quot = quot / 10;
        }
    }
    
    return result;
}

int main(){
    int x = 12345;

    printf("%d", reverse(x));
}