#include<iostream>
using namespace std;
int main()
{
  int a[3]={1,2,3};
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<3;j++)
    {
        cout << "(" << a[i] << ',' << a[j] << ')' << endl ;
    }
  }
  return 0;
}