#include<stdio.h>
int main()
{
    int x,a,b;
    scanf("%d%d%d",&x,&a,&b);
    int total=a+b*2;
    if(total>=x)
    {
        printf("Qualify");
    }
    else
    {
        printf("Not Qualify");
    }
}