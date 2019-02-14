#include <stdio.h>

void main()
{
    int a;
    printf("Enter the number a is");
    scanf("%d",&a);
    if(a>0)
    {
        printf("positive");
    }
    else if(a<0)
    {
        printf("Negative");
    }
    else
    {
        printf("Zero");
    }
}
