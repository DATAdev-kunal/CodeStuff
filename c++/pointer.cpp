#include <iostream>
using namespace std;
int main(){
   int n;
   cin>>n;
                  
   int* nptr;  // declaring a pointer variable
   nptr= &n;   // assigning value of pointer

   cout<<&n<<endl; // printing address using address operator

   cout<<nptr<<endl; // printing value of pointer variable
   cout<<*nptr<<endl; // dereferrencing pointer variable

   *nptr = n+10;
   cout<<n<<endl;

return 0;
}