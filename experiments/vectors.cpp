#include <iostream>
#include <vector>
using namespace std;

int main(){
   vector<int> rollNo;
   rollNo={58,23,44,26,98};
   cout<<rollNo[3]<<endl;
   cout<<rollNo.at(4)<<endl;

   rollNo.push_back(83);
   cout<<rollNo.at(5)<<endl;

   rollNo.erase(rollNo.end()-2);
   
   for(auto s: rollNo){
      cout<< s <<" ";
   }cout<<endl;

   cout<<rollNo.size();
   
   //sort(rollNo.begin(), rollNo.end());
   return 0;
}