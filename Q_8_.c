#include <stdio.h>
void print_binary(int n) 
{
    if (n <= 1) {
        printf("%d", n);
        return;
    }
    print_binary(n / 2);
    printf("%d", n % 2);
}
int main() 
{
    int n;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    printf("The binary of entered decimal number is: ");
    print_binary(n);

    return 0;
}

