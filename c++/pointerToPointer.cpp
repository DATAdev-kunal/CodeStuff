#include <iostream>
using namespace std;

int main(){
   int a=10;
   int* ptr=&a;
   int** qtr=&ptr;

   cout<<&a<<endl; // address of a
   cout<<ptr<<endl; // address of a
   cout<<*ptr<<endl; //value of a
   cout<<qtr<<endl; //address of ptr
   cout<<*qtr<<endl;// vaue of ptr i.e. address of a
   cout<<**qtr<<endl;// value of a
}