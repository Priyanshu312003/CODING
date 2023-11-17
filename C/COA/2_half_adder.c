#include<stdio.h>

int main()
{
    int a,b;
    int c=0;

    printf("enter the values of A and B");
    scanf("%d",&a);
    scanf("%d",&b);
        if(a==0)
        c++;
        if(b==0)
        c++;
    if(c==2||c==0)
     printf("sum=0");
    else
     printf("sum=1");
    
    printf("carry=%d",a*b);

    return 0;
}