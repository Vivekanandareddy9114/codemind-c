#include<stdio.h>
int main()
{
    int n,num,sum=0;
    scanf("%d",&n);
    num=n*n;
    while(num!=0)
    {
        sum=sum+(num%10);
        num=num/10;
    }
    if(sum==n)
    printf("Neon Number");
    else
    printf("Not Neon Number");
}