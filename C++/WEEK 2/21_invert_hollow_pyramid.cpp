// *     * 
//  *   *
//   * *
//    * 
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
    for(int k=0;k<=i;k++)
    {
      cout<<' ';
    }
   for(int c=j;c>0;c--)
   {
    if(c==j || c==1)
    {
      cout<<'*';
    }  
    else
    {
      cout<<' ';
    }
   }
   j=j-2;
   cout<<'\n';
  }
  return 0;
}   