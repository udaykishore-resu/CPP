//char* strcpy(char* destination, const char* source);
#include<stdio.h>
#include<stdlib.h>

char* strcpy(char *dest, char *srce){
    if(dest == NULL)
        return NULL;
    char *ptr = dest;
    while(*srce != '\0'){
        *dest = *srce;
        dest++;
        srce++;
    }
    *dest = '\0';
    return ptr;
}

int main(){
    char *srce = "Udaykishore";
    char *dest = (char *)malloc(sizeof(char)*25);
    printf("%s\n",strcpy(dest,srce));
    return 0;
}