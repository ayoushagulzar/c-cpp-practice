// Practice 9.5: Array of complex numbers
// Question: Read 5 complex numbers into an array and display each one with a
//           function.

#include <stdio.h>

typedef struct c
{
    int real;
    int imaginary;
} Complex;

void display(Complex c)
{
    printf("The value of complex number is %d + %di\n", c.real, c.imaginary);
}

int main()
{
    Complex c_arr[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter real part: \n");
        scanf("%d", &c_arr[i].real);
        printf("Enter imaginary part: \n");
        scanf("%d", &c_arr[i].imaginary);
        display(c_arr[i]);
    }
    return 0;
}
