#include <iostream>
using namespace std;

int main(){
   int n;
   cout<<"enter the no.: ";
   cin>>n;
   int num=2;

   while(num<=n){
      int div=2;
         while(div<num){
            if((num%div)!=0){
               div++;
            }else{
               num++;
            } 
         }
         cout<<num<<endl;
         num++;
   }
   return 0;
}