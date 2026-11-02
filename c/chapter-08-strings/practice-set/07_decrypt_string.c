// Practice 8.7: Decrypt a string
// Question: Decrypt the output of 8.6 by subtracting 1 from every character.

#include<stdio.h>
#include<string.h>

int main(){
    char str[]="J!epo(u!lopx!bozuijoh";
    for (size_t i = 0; i < strlen(str); i++)
    {
        str[i]=str[i]-1;
    }
    printf("%s\n", str);
    
    return 0;
}
