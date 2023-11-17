//  *******
//   *****
//    ***
//     *
#include<iostream>
using namespace std;
int main()
{  
    int n;
    cout<<"enter number of rows";
    cin>>n;
    int j=n+n-1;
  for(int i=1;i<=n;i++)
  {
    for(int k=i;k>=1;k--)
    {
        cout<<' ';
    }
    for(int c=j;c>=1;c--)
    {
        cout<<'*';
    }
    j=j-2;
    cout<<'\n';
  }
  return 0;
}