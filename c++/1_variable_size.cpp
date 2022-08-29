#include <iostream>
using namespace std;

int main(){
   int i;
   float f;
   char c;
   bool b;
   short int si;
   long int li;
   
   cout<<endl<<"size of intger is :"<<sizeof(i)<<endl;//4
   cout<<"size of float is  :"<<sizeof(f)<<endl;//4
   cout<<"size of char is   :"<<sizeof(c)<<endl;//1
   cout<<"size of bool is   :"<<sizeof(b)<<endl;//1
   cout<<"size of short intger is :"<<sizeof(si)<<endl;//2
   cout<<"size of long intger is :"<<sizeof(li)<<endl<<endl;//4

return 0;
}