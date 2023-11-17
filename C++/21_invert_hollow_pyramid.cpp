// ******* 
//  *****
//   ***
//    * 
#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"enter number of rows";
  cin>>n;
  for(int i=1;i<=n;i++)
  {
    for(int k=0;k<=i;k++)
    {
      cout<<' ';
    }
   for(int j=i;j<=n;j++)
   {
    cout<<'*';
   }
   cout<<'\n';
  }
  return 0;
}   