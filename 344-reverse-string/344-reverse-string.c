void swap(char *a, char *b){
    char temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void reverseString(char* s, int sSize){
    int i;
    int point = sSize - 1;

    for(i = 0 ; i < sSize / 2 ; i++)
        swap(&s[i], &s[point - i]);
}