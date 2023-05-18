#include<stdio.h>
int main()
{
    int l,b,h,c;
    scanf("%d%d%d%d",&l,&b,&h,&c);
    int tc=c*((l+2*h)*(b+2*h)-(l*b));
    printf("%d",tc);
}