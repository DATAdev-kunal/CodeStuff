#include <bits/stdc++.h>
using namespace std;

void printStack(vector<int> st){
   for(int i=0;i<=(sizeof(st)/sizeof(st[0]));i++){
      cout<<st[i]<<" ";
   }
}


int main(){
   vector<int> st;

   st.push_back(5);
   st.push_back(4);
   st.push_back(3);
   st.push_back(2);
   st.push_back(1);
   st.push_back(0);
   st.push_back(-1);

   printStack(st);
   return 0;
}