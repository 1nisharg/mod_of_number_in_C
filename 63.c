#include<stdio.h>
int main()
{
    int a;
    printf("enter a number: ");
    scanf("%d", &a);
    if(a>=0)
    {
        printf("a=%d",a);
    }
    else
    {
        int b=-(a);
        printf("%d",b);
    }
    return 0;
}