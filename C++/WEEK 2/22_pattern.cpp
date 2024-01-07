// **** ****
// ***   ***
// **     **
// *       *
// *       *
// **     **
// ***   ***
// **** ****
#include<iostream>
using namespace std;
// upper half
int main()
{
  int n=4;
  for(int i=0;i<n;i++)
  {
    for(int j=i;j<n;j++)
    {
      cout<<'*';
    }
    for(int j=0;j<i+i+1;j++)
    {
      cout<<' ';
    }
    for(int j=i;j<n;j++)
    {
      cout<<'*';
    }
    cout<<'\n';
  }
  // Lower Half
  for(int i=n;i>0;i--)
  {
    for(int j=n;j>=i;j--)
    {
      cout<<'*';
    }
    for(int j=0;j<i*2-1;j++)
    {
      cout<<' ';
    }
    for(int j=n;j>=i;j--)
    {
      cout<<'*';
    }
    cout<<'\n';
  }
  return 0;
}