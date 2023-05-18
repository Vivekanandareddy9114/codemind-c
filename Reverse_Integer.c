#include<stdio.h>
int rev(int n)
{
    int num,sum=0;
    while(n!=0)
    {
    num=n%10;
    sum=sum*10+num;
    n=n/10;
    }
    return sum;
}
int main()
{
    int n;
    scanf("%d",&n);
    int x=rev(n);
    printf("%d",x);
}