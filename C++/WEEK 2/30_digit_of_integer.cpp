#include<iostream>
using namespace std;
int digit(int number)
{
    while(number>0)
    {
        int d=number%10;
        cout << d << endl;
        number=number/10;
    }
}
int main()
{
    int n;
    cout<<  "enter a number"  << endl;
    cin>>n;
    cout<< "all the digits of the number is"  << endl;
    digit(n);
  return 0;
}