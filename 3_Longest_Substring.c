#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char * s){
     int count=1;
    int max_count=1;
    int start=0;
    
    /*
    if(!s[0])
        return 0;
    else if(!s[1])
        return max_count;
    */

    if(strlen(s)==0)
        return 0;
    else if(strlen(s)==1)
        return max_count;

    for(int i=1; s[i]; i++)
    {
        for(int j=start; j<i; j++)
        {
            if(s[i] != s[j])
                count++;
            else
                start = j+1;         
        }
        if(max_count < count)
            max_count = count;
        count = 1;
    }
    return max_count;
}

int main(){
    char s[9]="abcabcbb";
    printf("%d\n", lengthOfLongestSubstring(s));
}