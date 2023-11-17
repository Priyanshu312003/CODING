#include<stdio.h>
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
        for(int j=0;j<=8;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
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