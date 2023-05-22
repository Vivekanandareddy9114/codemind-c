#include<stdio.h>
int main()
{
    int n,num,sum=0,sub,mul=1;
    scanf("%d",&n);
    while(n!=0)
    {
        num=n%10;
        sum=sum+num;
        mul=mul*num;
        n=n/10;
    }
    sub=mul-sum;
    printf("%d",sub);
}