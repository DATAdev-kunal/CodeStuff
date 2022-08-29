#include <iostream>
using namespace std;

int sum(int n){
   int sumk=0;
      for(int i=1;i<=n;i++){
      sumk=sumk+i;
   }
   return sumk;
   }
int main(){
   
   int n;
   cin>>n;

   cout<<sum(n)<<endl;
   return 0;
} 