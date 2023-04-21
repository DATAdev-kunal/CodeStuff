#include <iostream>
using namespace std;

int decimalToBinary(int n)
{
   int ans=0;
   int base=1;

   while(base<=n)
      base*=2;
   base/=2;

   while(base>0)
   {
      int lastDigit=n/base;
      n-=lastDigit*base;
      base/=2;
      ans= ans*10 + lastDigit;
   }
   return ans;
}

int main()
{
   int n;
   cout<<"Enter any number"<<endl;
   cin>>n;

   cout<<decimalToBinary(n)<<endl;
   return 0;
}