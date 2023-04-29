#include <iostream>
using namespace std;
class Sum{
   int a,b;
   public:
      void input(){
         cout<<"Enter two numbers :";
         cin>>a>>b;
      }
      void sum(){
         cout<<"Sum is : "<<a+b;
      }
};

int main(){
   Sum p1;
   p1.input();
   p1.sum();
   return 0;
}