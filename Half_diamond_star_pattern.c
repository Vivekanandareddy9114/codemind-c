#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=3)
    {
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=i;++j)
        {
            printf("*");
        }
        printf("
");
    }
    for(int k=n-1;k>=1;--k)
    {
        for(int z=1;z<=k;++z)
        {
            printf("*");
        }
        printf("
");
    }
    }
    else
    printf("The pattern is not possible");
}