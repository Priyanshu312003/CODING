#include<stdio.h>
int main()
{
  int a,b,c;
    int d=0;

    printf("enter the values of A,B and C");
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
        if(a==0)
        d++;
        if(b==0)
        d++;
        if(c==0)
        d++;
    if(c==0||c==2)
        printf("sum=1");
    else
        printf("sum=0");
    if(a*b==1||b*c==1||c*a==1)
       printf("carry=1");
    else
        printf("carry=0");    
        return 0;
}