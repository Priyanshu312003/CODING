#include<stdio.h>
int stack[100],choice,n,top,x,i;
int main()
{
    top=-1;
    printf("\n Enter the size of STACK[MAX=100]:");
    scanf("%d",&n);
    printf("\nSTACK OPERATIONS USING ARRAY");
    printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT");
    do
    {
        printf("\n Enter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            {
                if(top>=n-1)
                printf("\n\tSTACK is over flow");
                else
               {
                printf(" Enter a value to be pushed:");
                scanf("%d",&x);
                top++;
                stack[top]=x;
               }
                break;
            }
                       case 2:
            {
                if(top<=-1)
                printf("\n\t Stack is under flow");
                else
                {
                printf("\n\t The popped elements is %d",stack[top]);
                top--;
                }
                break;
            }
            case 3:
            {
                if(top>=0)
                {
                printf("\n The elements in STACK \n");
                for(i=top; i>=0; i--)
                printf("\n%d",stack[i]);
                printf("\n Press Next Choice");
                }
                else
                {
                printf("\n The STACK is empty");
                }
                break;
            }
            case 4:
            {
                printf("\n\t EXIT POINT ");
                break;
            }
            default:
            {
                printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
            }
                
        }
    }
      while(choice!=4);
    return 0;
}