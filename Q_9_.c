#include <stdio.h>
void print_binary(int n) 
{
    if (n <= 1) {
        printf("%d", n);
        return;
    }
    print_binary(n / 8);
    printf("%d", n % 8);
}
int main() 
{
    int n;

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    printf("The octal of entered decimal number is: ");
    print_binary(n);

    return 0;
}

