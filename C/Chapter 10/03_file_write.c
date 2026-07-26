#include<stdio.h>

int main(){
    FILE*fptr;
    fptr= fopen("harry.txt","a");
    int num=500;
    fprintf(fptr, "%d", num);

    fclose(fptr);
    
    return 0;
}