#include<stdio.h>
int n,x=1;
void number(int x)
{
    if(x<=n)
    {
        printf("%d\n",x);
        number(x+1);
    }
}
int main()
{
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("The %d natural numbers are :-\n",n);
    number(x);
    return 0;
}