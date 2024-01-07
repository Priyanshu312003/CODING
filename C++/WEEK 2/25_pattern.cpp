// A
// ABA
// ABCBA
// ABCDCBA
// ABCDEDCBA
// ABCDEFEDCBA
#include<iostream>
using namespace std;
int main()
{
    char j;
  for(char i='A';i<='E';i++)
  {
    for(j='A';j<=i;j++)
    {
      cout<<j;
    }
    for(char k=j-2;k>='A';k--)
    { 
        if(i=='A')
        {
         continue;
        }
        else
        {
        cout<<k;
        }
    }
    cout<<'\n';
  }
  return 0;
}