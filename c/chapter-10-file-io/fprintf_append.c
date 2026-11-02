// Topic: Writing to a file (append mode)
// Appends a number to the end of output.txt with fprintf().

#include<stdio.h>

int main(){
    FILE*fptr;
    fptr= fopen("output.txt","a");
    int num=500;
    fprintf(fptr, "%d", num);

    fclose(fptr);
    
    return 0;
}
