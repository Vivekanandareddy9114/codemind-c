#include<stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    a=n/4;
    b=n%4;
    if((b==3)||(b==2)||(b==1))
    {
        c=a+1;
        printf("%d",c);
    }
    else
    {
        printf("%d",a);
    }
}