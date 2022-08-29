/* #include <iostream>
using namespace std;

int getBit(int n, int pos){
   int mask = (n && (n<<pos))!=0;                // WRONG !
   return mask;
}
int main(){
   cout<<getBit(5,1)<<endl;
   return 0;
} */

#include <iostream>
using namespace std;

int getBit(int n, int pos){
   int mask= (n>>pos) & 1;
   return mask;                              // CORRECT !(from notes)...
}
int main(){
   cout<<getBit(4,2)<<endl;
   return 0;
}