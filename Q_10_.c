#include<stdio.h>
int x,N;
void reverse(int N)
{
    if(N!=0)
    {
        printf("%d",N%10);
        reverse(N/10);
    }
}
int main()
{
    printf("Enter a number\n");
    scanf("%d",&N);
    printf("The reverse of entered number is :-\n");
    reverse(N);
    return 0;
}