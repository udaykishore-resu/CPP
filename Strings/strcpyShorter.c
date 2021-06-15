#include<stdlib.h>
#include<stdio.h>


char* strcpy(char *dest, char *srce){
    if(dest==NULL)
        return NULL;
    char *ptr=dest;
    while((*dest++=*srce++)!= '\0');
    return ptr;
}

int main(){
    char *srce = "kishore";
    char *dest = (char*)malloc(25*sizeof(char));
    printf("%s\n",strcpy(dest,srce));
    return 0;
}