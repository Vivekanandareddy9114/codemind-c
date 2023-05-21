#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int p=0,q=0,r=0;
    p=a+b;
    q=b+c;
    r=a+c;
    if(p>q && p>r)
    printf("%d",p);
    else if (q>p && q>r)
    printf("%d",q);
    else
    printf("%d",r);
}