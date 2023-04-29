/* #include <iostream> 
using namespace std;

int linearSearch(int arr[],int N, int key){
   for(int i=0; i<N;i++){
      if(arr[i]==key){
         return i;
      }
   }
   return -1;
}

int main(){
   int N,key;
   cout<<"size of array: ";
   cin>>N;
   
   cout<<"enter array: ";
   int arr[N];
   for(int i=0;i<N;i++){
      cin>>arr[i];
   }
   cout<<"find element: ";
   cin>>key;
   cout<<linearSearch(arr,N, key);
   
   return 0;
} */

#include <bits/stdc++.h>
using namespace std;

int linearSearch(int array[], int size, int key){
   int i=0;
   for(;i<size;i++){
      if(array[i]==key){
         return i;
      }
   }
   return -1;
}
int main(){
   int size, key;
   cout<<"size of array: ";
   cin>>size;

   cout<<"enter array: ";
   int array[size];
   for(int i=0;i<size;i++){
      cin>>array[i];
   }

   cout<<"element to find: ";
   cin>>key;
   int position= linearSearch(array, size, key);
   cout<<"position of element is: "<<position;
   return 0;
}