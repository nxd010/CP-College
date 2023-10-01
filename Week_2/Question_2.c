#include<stdio.h>
 
int main() {
    float fahren, celsius;
 
    printf("Enter the temperature in celsius\n");
    scanf("%f", &celsius);
 
    fahren =(9.0/5.0) * celsius + 32;
 
    printf("%.2fC is equal to %.2fF\n", celsius, fahren);
     
    return 0;
}