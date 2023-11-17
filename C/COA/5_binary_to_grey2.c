#include <stdio.h>
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
    int b[c];
    for(int i=0;i<=c-1;i++)
    {
        b[i]=a%10;
        a/10;
    }
    printf("binary to gray is=%d",b[0]);
    for(int i=0;i<=c-2;i++)
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