//    *
//   * *
//  *   *
// *     *
//*       *
#include<iostream>
using namespace std;
int main()
{
  int n;
  int c=1;
  cout<<"enter number of rows";
  cin>>n;
  for(int row=0;row<n;row++)
  {
  for(int space=0;space<=n-row-1;space++)
  {
    cout<<' ';
  }
  for(int col=1;col<=c;col++)
  {
    if(col==1 || col==c)
    {
      cout<<'*';
    }
    else
    {
      cout<<' ';
    }
  }
  c=c+2;
  cout<<'\n';
  }

  return 0;
}