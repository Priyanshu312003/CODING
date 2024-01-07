// ********1********
// *******2*2*******
// ******3*3*3******
// *****4*4*4*4*****
// ****5*5*5*5*5****
#include<iostream>
using namespace std;
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int j=i;j<=8;j++)
        {
            cout<<'*';
        }
        for(int j=1;j<=i;j++)
        {
            cout<<i;
            if(j!=i)
            {
                cout<<'*';
            }
        }
        for(int j=i;j<=8;j++)
        {
            cout<<'*';
        }
        cout<<'\n';
    }
  
  return 0;
}