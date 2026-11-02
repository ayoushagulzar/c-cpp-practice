// Practice 8.6: Encrypt a string
// Question: Encrypt a string by adding 1 to the ASCII value of every character.
// Note: Decrypted by 07_decrypt_string.c

#include<stdio.h>
#include<string.h>

int main(){
    char str[]="I don't know anything";
    for (size_t i = 0; i < strlen(str); i++)
    {
        str[i]=str[i]+1;
    }
    printf("%s\n", str);
    
    return 0;
}
