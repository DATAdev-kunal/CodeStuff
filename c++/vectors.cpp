#include <iostream>
#include <vector>
using namespace std;

int main(){
   vector<int> v;
   v.push_back(1);
   v.push_back(2);
   v.push_back(3);

   for(int i=0;i<v.size();i++){
      cout<<v[i]<<" ";
   }cout<<endl;
   
   vector<int>::iterator it;
   for(it=v.begin(); it!=v.end();it++){
      cout<<*it<<" ";
   }cout<<endl;
   
   for(auto element:v){
      cout<<element<<" ";
   }cout<<endl;

   vector<int> v2 (3,80);

   swap(v,v2);
   
   for(auto element:v){
      cout<<element<<" ";
   }cout<<endl;

   for(auto element:v2){
      cout<<element<<" ";
   }cout<<endl;

   v.pop_back();

   vector<int>::iterator iter;
   for(iter=v.begin(); iter!=v.end(); iter++){
      cout<<*iter<<" ";
   }cout<<endl;


   return 0;
}