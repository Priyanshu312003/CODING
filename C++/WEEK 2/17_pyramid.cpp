  //     *
  //    ***
  //   *****
  //  ******* 
#include<iostream>
using namespace std;
int main()
{   int n;
    int c=1;
c<<"enter the number of rows";
cin>>n;
   for(int i=n;i>=1;i--)
  {
    for(int k=1;k<=n;k++)
    {
        c<<' ';
    }
    for(int j=1;j<=i+i-1;j++)
    {
        c<<'*';
    }
    c<<'\n';
    c=c+2;
  }
  return 0;
}