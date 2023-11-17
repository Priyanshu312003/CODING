#include <stdio.h>
int main()
{
  int a[10];
  int temp;
  printf("enter 10 values for the array");
      for(int i=0;i<=9;i++)
    {
       scanf("%d",&a[i]);
    }
    for(int i=0;i<=9;i++)
    {
        for(int j=i+1;j<=9;j++)
        {
            if(a[j]<a[i])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        
        }
    }
    printf("the sorted array in ascending order is\n");
    for(int i=0;i<=9;i++)
    {
        printf("%d\n",a[i]);
    }
  return 0;
}