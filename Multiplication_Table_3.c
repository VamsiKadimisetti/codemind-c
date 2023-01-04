#include<stdio.h>
int main()
{
    int n,i,f,r;
    scanf("%d %d %d",&n,&f,&r);
    for(i=f;i<=r;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}