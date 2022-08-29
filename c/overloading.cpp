#include <iostream>

using namespace std;

int area(int,int);
float area(int);

int main(){
   float r;
   int l,b;

   cin>>l>>b>>r;

   int ra = area( l , b);
   float ca = area(r);
   cout<<"Area of the rectangle is"<<ra<<"\n";
   cout<<"Area of the circle is"<<ca<<"\n";

   return 0;
}

int area(int l , int b){
   int a = l*b;
   return a;
}

float area(int r){
   float pi = 3.14;
   float a = pi * r * r;
   return a;
}



