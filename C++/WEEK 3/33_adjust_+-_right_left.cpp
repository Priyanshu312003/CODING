#include<iostream>
using namespace std;
int main()
{
  int a[8]={1,-1,4,-2,6,-3,7,-9};
  int b[8]={0,0,0,0,0,0,0,0};
  for(int i=0;i<8;i++)
  {
   if(a[i]<0)
   {
    b[i]=a[i];
   }
   else
   {
    b[7-i]=a[i];
   }
   for(int i=0;i<8;i++)
   {
    cout << b[i] << endl;
   }
  }
  return 0;
}