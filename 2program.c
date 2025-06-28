#include <stdio.h>
int main()
{
    int a, b;
    printf(" Enter a number");
    scanf("%d", &a, &b);
    if (a % b == 0) 
    {
        printf(" Entered value is even");
    }
    else
    {
        printf(" Entered value is odd");
    }
    Return 0;
}