#include<stdio.h>
int main()
{
    int n,N;
    while(1)
    {
        scanf("%d",&n);
        if(n==-1)
        break;
        else
        N=n*n;
        printf("%d
",N);
    }
}