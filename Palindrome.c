#include<stdio.h>
int main()
{
    int n,old,d,rev=0;
    scanf("%d",&n);
    old=n;
    while(n>0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
        if(old==rev)
        printf("True");
        else printf("False");
}