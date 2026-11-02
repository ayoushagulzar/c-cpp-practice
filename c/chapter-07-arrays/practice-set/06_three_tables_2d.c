// Practice 7.6: Tables of 2, 7 and 9 in a 2D array
// Question: Store the multiplication tables of 2, 7 and 9 in a 3x10 2D array.

#include<stdio.h>

int main(){
    int arr[3][10];
    int mult[]={2, 7, 9};
    for (int i = 0; i < 3; i++)
    {
   for (int j = 0; j < 10; j++)
   {
    arr[i][j]=mult[i]* (j+1);
   }
   
    }
    for (int i = 0; i < 3; i++)
    {
   for (int j = 0; j < 10; j++)
   {
   printf("arr[%d][%d] = %d\n",i,j,arr[i][j]);
   
   }
   
    }
    
    

    return 0;
}
