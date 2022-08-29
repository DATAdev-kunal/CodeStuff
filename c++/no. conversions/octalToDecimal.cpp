#include <bits/stdc++.h>
using namespace std;
int octalToDecimal(int n){
   int ans;
   int base=1;
   while(n>0){
      int lastdigit=n%10;
      ans+=lastdigit*base;
      base*=8;
      n/=10;
   }
   return ans;
}
int main(){
   
   int n;
   cin>>n;

   cout<<octalToDecimal(n)<<endl;
   return 0;

}