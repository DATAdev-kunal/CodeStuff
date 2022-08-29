#include <iostream>
using namespace std;

int increment(int* n){
   int ans= (*n)+1;
   return ans;
}

int main(){
   int a=1100000000;
   int* ptr= &a;

   cout<<increment(ptr)<<endl;
   
   return 0;
}