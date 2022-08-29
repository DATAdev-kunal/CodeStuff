#include <iostream>
using namespace std;

int fact(int n){
   int facto=1;
    for(int k=1;k<=n;k++){
       facto*=k;
    }
    return facto;
}

int main(){
   int n;
   cin>>n;

   int ans= fact(n);
   cout<<ans;
   
   return 0;
}