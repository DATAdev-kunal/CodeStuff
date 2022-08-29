#include <iostream>
using namespace std;

int main(){
   string s="sagerhierusbga";

   // converting string uppercase
   for(int i=0;i<s.size();i++){
      if(s[i]>='a' && s[i]<='z'){
         s[i]-=32;
      }
   }
   cout<<s<<endl;

// converting string lowercase
   for(int i=0;i<s.size();i++){
      if(s[i]>='A' && s[i]<='Z'){
         s[i]+=32;
      }
   }
   cout<<s<<endl;
   return 0;
}