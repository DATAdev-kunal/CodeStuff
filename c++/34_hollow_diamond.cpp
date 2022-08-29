#include <iostream>
using namespace std;

int main(){
   
   int n;
   cin>>n;

   for(int i=n;i>=1;i--){
      for(int j=1;j<=i;j++){
         if(j<n || j>n){
            cout<<"*";
         }else{
            cout<<"* ";
         }
      
   }
   cout<<endl;
   }   
   

  /* for(int i=n;i>=1;i--){
      for(int j=1;j<=n-i;j++){
         cout<<" ";
      }
      for(int k=n;k>=1;k--){
         cout<<" *";
      }
      cout<<endl;
   }*/
   return 0;
}