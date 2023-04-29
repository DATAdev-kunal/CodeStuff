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
   protected:
   int b;
   public:
      void getData(){
         cout<<"enter no. b :";
         cin>>b;
      }
      
};
class C : public B{
   int c;
   public:
      void getDatac(){
         cout<<"enter no. c :";
         cin>>c;
      }
      void outData(){
         cout<<"sum is :"<<(a+b+c);
      }
};
int main(){
   C obj1;
   obj1.input();
   obj1.getData();
   obj1.getDatac();
   obj1.outData();
   return 0;
}