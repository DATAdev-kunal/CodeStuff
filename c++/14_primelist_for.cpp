#include <iostream>
using namespace std;
int main(){
   int a,b;
   cin>>a>>b;
   
   for(int num=a;num<=b;num++){
      int div;
      for(div=2;div<num;div++){
         if(num%div==0){
            break;
         }
      }
      if(div==num){
      cout<<num<<endl;
      }
   }
   
   return 0;
}