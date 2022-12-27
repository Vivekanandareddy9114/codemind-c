#include<stdio.h>
int main()
{
    int a,n;
    scanf("%d",&a);
    if(a<=2)
    printf("SMALL");
    else
    {
        n=a%3;
        if(n==1)
        printf("HUGE");
        else if(n==2)
        printf("SMALL");
        else if(n==0)
        printf("NORMAL");
        else
        printf("invalid");
    }
}