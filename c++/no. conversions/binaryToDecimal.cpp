#include <iostream>
using namespace std;

int binaryToDecimal(int n){
   int ans=0;
   int base=1;

   while(n>0){
      int lastdigit=n%10;
      ans+=lastdigit*base;
      base*=2;
      n/=10;
   }
   return ans;
}
int main(){
   int n;
   cin>>n;

   cout<<binaryToDecimal(n)<<endl;
   return 0;
}