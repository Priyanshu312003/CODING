#include<iostream>
using namespace std;
int main()
{
  for(int i=0;i<6;i++)
  {
    for(int j=i;j<6;j++)
    {
        if(i==0 || j==i || j==5)
        {
            cout<<'*';
        }
        else
        {
            cout<<' ';
        }
    }
    cout<<'\n';
  }
  return 0;
}