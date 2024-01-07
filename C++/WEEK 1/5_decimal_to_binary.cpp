#include<iostream>
using namespace std;
int main()
{
  int dec,bit=0,fbit=0,c=0,e=0;
  cout<<"enter a decimal number";
  cin>>dec;
  while(dec>0)
  {
    bit=(bit*10)+(dec%2);
    dec=dec/2;
    c++;
  }
  while(bit != 0)
  {
    int d=bit%10;
    fbit=(fbit*10)+d;
    bit=bit/10;
    e++;
  }
  cout<<"binary value is="<<fbit;
  if(c != e)
  c<<0;
  return 0;
}

// completed