#include<iostream>
using namespace std;
int main()
{
  for(int i=1;i<=5;i++)
  {
    for(int j=1;j<=8;j++)
    {
        if(i>=2 && i<=4 && j>=2 && j<=7)
        {
            c<<' ';
        }
        else
        {
            c<<"*";
        }
    }
          c<<'\n';
  }
  return 0;
}