#include<iostream>
using namespace std;
int sum(int a,int b,int c)
{
    int sum=a+b+c;
    return sum;
}
int main()
{
  int ans=sum(1,2,3);
  cout<<ans;
  return 0;
}