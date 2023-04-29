#include <iostream>
using namespace std;

int main(){
   //no. of elements in array
   int n; 
   cout<<"enter the no. of elments: ";
   cin>>n;
   
   //initialization of array
   int arr[n];
   cout<<"input your array: ";

   //array input
   for(int i=0;i<n;i++){ 
      cin>>arr[i];
   }

   //array output before insertion
   for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
   }cout<<endl;

   //input the insertion element
   int insert;
   cout<<"enter the insertion element: ";
   cin>>insert;

   //input the insertion position
   int index;
   cout<<"enter the index of insertion: ";
   cin>>index;

   //inserting the element
   for(int i=n;i>index;i--){
      arr[i]=arr[i-1];
   }
   arr[index]=insert;
   
   //array output after insertion
   for(int i=0;i<=n;i++){
      cout<<arr[i]<<" ";
   }cout<<endl;

   return 0;
   
}