// modern mathematicians define a number as prime if it is divided by exactly two numbers. 

#include <iostream>
using namespace std;

int main(){
   int N;
   cout<<"enter the no. : ";
   cin>>N;
   
   int div=2;
   if(N==1){
      cout<<"Non prime"<<endl;
   }else{
   while(div<N){
      if(N%div==0){
         cout<<"Non prime"<<endl;
         exit(0);
      }else{
         div++;
      }
   }
   cout<<"Prime";
   }
   return 0;
   }