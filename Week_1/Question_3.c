#include <stdio.h>
int main(){
    int a, b, dif;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    dif=a-b;
    printf("The difference is: %d \n", dif);
    return 0;
}