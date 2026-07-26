#include<stdio.h>
#include<string.h>

int main(){
    char str[]="J!epo(u!lopx!bozuijoh";
    for (int i = 0; i < strlen(str); i++)
    {
        str[i]=str[i]-1;
    }
    printf("%s\n", str);
    
    return 0;
}