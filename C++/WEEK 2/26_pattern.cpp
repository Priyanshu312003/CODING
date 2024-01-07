// numeric hollow inverted half pyramid
// 12345
// 2  5
// 3 5
// 45
// 5
#include<iostream>
using namespace std;
int main()
{
  for(int i=1;i<=5;i++)
  {
    for(int j=i;j<=5;j++)
    {
        if(i==1 || j==i || j==5)
        {
            cout<<j;
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