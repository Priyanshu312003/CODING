#include<iostream>
#include<cmath>
using namespace std;
int main()
{
  int bin,dec=0,i=0;
  c<<"enter the binary value";
  cin>>bin;
  while(bin>0)
{
    int d=bin%10;
    dec=(d*pow(2,i++))+dec;
    bin=bin/10;
}
c<<"the decimal value is"<<dec;
  return 0;
}