#include <stdio.h>

int main()
{
    int a, b, count, result=1;
    printf("Enter a and b: ");
    scanf("%d%d", &a, &b);
    for (count=1; count<=b; count++){
        result=result*a;
    }
    printf("The value of a to b is: %d \n", result);
    return 0;
}