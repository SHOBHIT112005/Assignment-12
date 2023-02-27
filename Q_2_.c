#include<stdio.h>
int n,x=1;
void number(int x)
{
    if(x<=n)
    {
        number(x+1);
        printf("%d\n",x);
    }
}
int main()
{
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("The %d natural numbers in reverse order are :-\n",n);
    number(x);
    return 0;
}