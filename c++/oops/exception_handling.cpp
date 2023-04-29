#include <iostream>
using namespace std;

int main(){
   int a=10,b=0,c=0;
   try{
      if(b==0)
         cout<<"Division is not possible";
      c=a/b;

   }
   catch(char *ex){
      cout<<ex<<endl;
   }
   
   
   return 0;
}