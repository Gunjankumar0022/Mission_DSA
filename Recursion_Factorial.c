#include <stdio.h>
int recursion (int num)
{
    int i,fact=1;
        for(i=1;i<=num;i++)
        {
            fact = fact * i;
        }
    return(fact);
}
int main()
{
    int recursion (int);
    int num,f;
    printf("Enter a Number");
    scanf("%d",&num);
    if(num>0)
    {
        f = recursion(num);
        printf("Factorial of %d = %d",num,f);
    }
    else
    {
        printf("Error");
    }
    return(0);
}