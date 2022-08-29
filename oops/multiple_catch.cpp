#include <iostream>
using namespace std;

int main(){
   int a;
   cin>>a;

   try{
      if(a==1)
         throw 1;
      else if(a==2)
         throw 'A';
      else
      throw 1.4;
   }
   catch(int x){
      cout<<"integer exception is caught"<<endl;
   }
   catch(char x){
      cout<<"character exception is caught"<<endl;
   }
   catch(float x){
      cout<<"float exception is caught"<<endl;
   }
   cout<<"end of the program !";
   return 0;
}