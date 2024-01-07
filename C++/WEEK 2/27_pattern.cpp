// numeric palindrone equilateral pyramid
//     1
//    121
//   12321
//  1234321
// 123454321
#include<iostream>
using namespace std;
int main()
{
  for(int i=1;i<=5;i++)
  {
    for(int k=5;k>=i;k--)
    {
        cout<<' ';
    }
    for(int j=1;j<=i;j++)
    {
        cout<<j;
    }
    for(int j=i-1;j>=1;j--)
    {
        if(j==0)
        {
            continue;
        }
        else
        {
            cout<<j;
        }
    }
    for(int k=4;k>=i;k--)
    {
        cout<<' ';
    }
    cout<<'\n';
  }
  return 0;
}