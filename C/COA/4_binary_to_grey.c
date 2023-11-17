#include<stdio.h>
int main()
{
    int a;
    int d,c;
    int temp;
    printf("enter the binary code");
    scanf("%d",&a);
    while(a>=0)
    {
     int d=a%10;
     c++;
     if(--a == -1)
     break;
    }
    for(int i=1;i<=c-1;i++)
    {
        temp=10*i;
    }
    d=a%temp;
    printf("grey code will be=%d",d);
    for(int i=1;i<=c-1;i++)
    {
        if(a%10 == a%100)
        printf("%d",0);
        if(a%10 != a%100)
        printf("%d",1);
        a=a/10;
        if(--a == -1)
        break;
    }
    return 0;
}