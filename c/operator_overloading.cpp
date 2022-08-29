#include <iostream>
using namespace std;

class complex{
   int real, imag;
   public:
      void getInput(){
         cout<<"Enter the number :";
         cin>>real>>imag;
      }
      void Print(){
         cout<<"Answer is : "<<real<<" + i"<<imag;
      }
      complex operator +(complex &c){
         complex temp;
         temp.real = c.real + real;
         temp.imag = c.imag +imag;
         return temp;
      }
};
int main(){
   complex c1,c2,c3;
   c1.getInput();
   c2.getInput();
   c3=c1+c2;
   c3.Print();
   return 0;

}