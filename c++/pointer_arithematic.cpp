#include <iostream>
using namespace std;

int main(){
   int a;
   cin>>a;
   int* aptr;
   aptr=&a;
   
   cout<<aptr<<endl;
   aptr++;
   
   cout<<aptr<<endl;
   cout<<*aptr<<endl;
   cout<<a<<endl;
}
