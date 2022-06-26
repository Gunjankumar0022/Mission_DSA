// 1} Check a number if its Odd Or Even.
#include <stdio.h>
int main(){
    int num;
    printf("Enter a number to check: ");
    scanf("%d",&num);
    if(num&1)
        printf("Odd");
    else
        printf("Even");
    return 0;
}