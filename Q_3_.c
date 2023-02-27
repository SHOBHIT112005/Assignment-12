#include<stdio.h>
int n,x=1;
void odd(int x)
{
    if(x<=n)
    {
        if(x%2!=0)
        printf("%d\n",x);
        odd(x+1);
    }
}
int main()
{
    printf("Enter a number\n");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("The first %d odd numbers are:-\n",(n-(n/2)));
        odd(x);
    }
    else
    {
        printf("The first %d odd numbers are:-\n",(n-((n-1)/2)));
        odd(x);
    }
    return 0;
}