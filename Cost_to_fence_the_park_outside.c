#include<stdio.h>
int main()
{ 
    int l,b,w,c,ta; 
    scanf("%d%d%d%d",&l,&b,&w,&c); 
    int area=(l+2*(w))*(b+2*(w))-(l*b); 
    ta=area*c; 
    printf("%d",ta);
}