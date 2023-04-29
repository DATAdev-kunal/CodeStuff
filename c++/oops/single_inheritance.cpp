#include <iostream>
using namespace std;
class A{
   protected:
   int a;
   public:
       void input(){
         cout<<"enter no. a :";
         cin>>a;
      }
  
};
class B : public A{
   int b;
   public:
      void getData(){
         cout<<"enter no. b :";
         cin>>b;
      }
      void outData(){
         cout<<"sum is :"<<a+b;
      }
};
int main(){
   B obj1;
   obj1.input();
   obj1.getData();
   obj1.outData();
   return 0;
}