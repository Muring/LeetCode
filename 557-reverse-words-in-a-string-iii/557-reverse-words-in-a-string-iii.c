void swap(char *a, char *b){
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

char * reverseWords(char * s){
    int i = 0, start = 0, end = 0;
    int sSize = strlen(s);
    
    while(start < sSize){
        if(s[end] == ' ' || end == sSize){
            for(i = 0 ; i < (end - start) / 2 ; i++)
                swap(&s[start + i], &s[end - 1 - i]);
            start = end + 1;
        }
        end ++; 
    }
    return s;
}