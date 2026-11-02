// Practice 5.3: Force of gravity
// Question: Write a function that calculates the force exerted by the Earth
//           on a body of mass m (F = m * g).

#include<stdio.h>
float force(float mass);
float force(float mass){
    return 9.8*mass;
}

int main(){
    float mass=29.45;
    printf("The force of attraction on a body of mass %.2f exerted by earth is %.2f\n",mass,force(mass));
    return 0;
}
