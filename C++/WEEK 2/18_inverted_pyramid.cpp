//  *******
//   *****
//    ***
//     *
#include<iostream>
using namespace std;
int main()
{  
    int n;
    c<<"enter number of rows";
    cin>>n;
    int j=n+n-1;
  for(int i=1;i<=n;i++)
  {
    for(int k=i;k>=1;k--)
    {
        c<<' ';
    }
    for(int c=j;c>=1;c--)
    {
        c<<'*';
    }
    j=j-2;
    c<<'\n';
  }
  return 0;
}