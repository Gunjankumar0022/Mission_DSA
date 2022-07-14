#include <stdio.h>
int fibonacci(int num)
{
    if(num == 1 || num == 2)
    return 1;
    return fibonacci(num -1) + fibonacci(num - 2);
}
int main()
{
    int num,i;
    printf("Enter Nth Tern No :- ");
    scanf("%d",&num);
    printf("%d",fibonacci(num));
    return(0);
}