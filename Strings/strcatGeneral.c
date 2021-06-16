#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* my_strcat(char *dest, const char *srce){
    char *ptr = dest+strlen(dest);
    while(*srce != '\0')
        *ptr++ = *srce++;
    *ptr='\0';

    return dest;
}

int main(){
    char *str = (char *)calloc(100,1);
    my_strcat(str,"Uday");
    my_strcat(str,"kishore");
    printf("%s\n",str); 
    return 0;
}