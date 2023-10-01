#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int isPrime(int n) {
    if (n < 2)
        return 0;  // Not a prime number

    for (int i = 2; i <= n / 2; ++i) {
        if (n % i == 0)
            return 0;  // Not a prime number
    }

    return 1;  // Prime number
}

int main() {
    int choice, num;

    do {
        printf("1. Factorial of a number\n");
        printf("2. Prime or not\n");
        printf("3. Odd or Even\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);
                printf("Factorial of %d is: %d\n", num, factorial(num));
                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);
                if (isPrime(num))
                    printf("%d is a prime number.\n", num);
                else
                    printf("%d is not a prime number.\n", num);
                break;

            case 3:
                printf("Enter a number: ");
                scanf("%d", &num);
                if (num % 2 == 0)
                    printf("%d is even.\n", num);
                else
                    printf("%d is odd.\n", num);
                break;

            case 4:
                printf("Exiting the program. Goodbye!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
                break;
        }
    } while (choice != 4);

    return 0;
}
