#include <iostream>
using namespace std;
class student{
   public:
   string Name;
   int Age;
   char Gender;

   void PrintInfo(){
      for(int i;i<n;i++){
      cout<<array[i].Name<<"  "<<array[i].Age<<"  "<<array[i].Gender<<endl;  
   }
   }
};

int main (){
   int n;
   cout<<"enter the size of array: ";
   cin>>n;

   cout<<"entries:"<<endl;

   student array[n];
   for(int i;i<n;i++){
      cout<<"Name: ";
      cin>>array[i].Name;
      cout<<"Age: ";
      cin>>array[i].Age;
      cout<<"Gender: ";
      cin>>array[i].Gender;
   }
   cout<<endl;
   
return 0;
}