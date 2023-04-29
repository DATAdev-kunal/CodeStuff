#include <iostream>
using namespace std;

int main(){
   int a,b,c;
   cout<<"enter 1st no. ";
   cin>>a;
   cout<<"enter 2nd no. ";
   cin>>b;

   try{
      if(b==0)
         throw b;
      else{
         c= a/b;
         cout<<"result is "<<c;
      }
   }
   catch(int x){
      cout<<"can't divide by "<<x<<endl;
   }
   cout<<"\nend of program !";
   return 0;
}