#include<stdio.h>
int n,x=1;
void even(int x)
{
    if(x<=n)
    {
        if(x%2==0)
        printf("%d\n",x);
        even(x+1);
    }
}
int main()
{
    printf("Enter a number\n");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("The first %d even numbers are:-\n",(n-(n/2)));
        even(x);
    }
    else
    {
        printf("The first %d even numbers are:-\n",(n-((n-1)/2)-1));
        even(x);
    }
    return 0;
}