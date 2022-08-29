#include <iostream>
using namespace std;
class complex{
   public:
      float real, imag;
   
      void input(){
         cout<<"Enter real & imag part :"<<endl;
         cin>>real>>imag;
      }
};

int main(){
   complex c1,c2, multi, div;
   c1.input();
   c2.input();
   multi.real = c1.real*c2.real - c1.imag*c2.imag;
   multi.imag = c1.imag*c2.real + c1.imag*c2.real;

   div.real= (c1.real *c2.real + c1.imag*c2.imag)/((c2.real)*(c2.real)+ (c2.imag)*(c2.imag)); 
    div.imag = ((c1.real* c2.imag) - (c1.imag *c2.real))/((c2.real)*(c2.real)+ (c2.imag)*(c2.imag));

   cout<<"multiplication is : "<< multi.real<<" + "<<multi.imag<<"i"<<endl;
   cout<<"division is : "<< div.real<<" + "<<div.imag<< "i"<<endl;
   return 0;
   
}