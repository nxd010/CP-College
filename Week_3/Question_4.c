#include<stdio.h>

int main()
{
    int num, n, ans=0;

    printf("Enter a number: ");
    scanf("%d", &num);
    n = num;
    while(num!=0)
    {
        ans = ans * 10;

        ans = num % 10 + ans;

        num = num/10;
    }
    printf("Reversed Number of %d is %d\n",n, ans);

   return 0;
}