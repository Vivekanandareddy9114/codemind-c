#include<stdio.h>
int main()
{
    int a,b,i,j,c;
    scanf("%d %d",&a,&b);
    for(i=a+1;i<b;++i)
    {
        c=0;
        for(j=2;j<=i/2;++j)
        {
            if(i%j==0)
            {
                c=1;
                break;
            }
        }
        if(c==0)
        printf("%d
",i);
    }
}