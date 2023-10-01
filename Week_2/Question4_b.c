#include <stdio.h>
int main(){
    int a, b;
    printf("Enter the value of A and B: ");
    scanf("%d%d", &a, &b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("The new value of a is %d and b is %d\n", a, b);
    return 0;
}