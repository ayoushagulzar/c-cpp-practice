#include<stdio.h>
#include<string.h>

int main(){
    char str[]="Ayousha";
    int i=0, count;
    char c=str[i];
    while (c!=0)
    {
      c=str[i];
      i++;
    }
    count=i-1;

    printf("Length calculated by loop : %d\n",count);
    printf("Length using strlen : %d\n",strlen(str));
    
    return 0;
}