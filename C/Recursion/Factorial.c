#include <stdio.h>
int factorial (int num)
{
    if (num == 0)
        return(1);
        return num * factorial(num - 1);
}
int main()
{
    int num,fact;
    printf("Enter Number :- ");
    scanf("%d",&num);
    if(num <= 0)
    {
        printf("Error");
    }
    else
    {
        printf("Factorial of %d = %d",num,factorial(num));
    }
    return(0);
}