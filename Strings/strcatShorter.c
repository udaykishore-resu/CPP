#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char* my_strcat(char *dest, const char *srce){
    strcpy(dest+strlen(dest),srce);
    return dest;
}

int main(){
    char *str = (char *)calloc(100,1);
    my_strcat(str,"uday");
    my_strcat(str,"kishore");
    my_strcat(str,"resu");
    printf("%s\n",str);
}



