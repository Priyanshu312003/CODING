  //     *
  //    ***
  //   *****
  //  ******* 
#include<iostream>
using namespace std;
int main()
{   int n;
    int c=1;
cout<<"enter the number of rows";
cin>>n;
   for(int i=n;i>=1;i--)
  {
    for(int k=1;k<=n;k++)
    {
        cout<<' ';
    }
    for(int j=1;j<=i+i-1;j++)
    {
        cout<<'*';
    }
    cout<<'\n';
    c=c+2;
  }
  return 0;
}