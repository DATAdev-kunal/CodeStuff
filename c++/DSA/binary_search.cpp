/* #include <iostream>
using namespace std;

int binarySearch(int array[],int n, int key){
   int s=0;
   int e=n;

   while(s<=e){
      int mid=(s+e)/2;

      if(array[mid]==key){
         return mid;
      }
      else if(array[mid]>key){
         e=mid-1;
      }
      else{
         s=mid+1;
      }
   }
   return -1;
}

int main(){
   int n;
   cin>>n;

   int array[n];

   for(int i=0; i<n;i++){
      cin>>array[i];
   }

   int key;
   cin>>key;

   cout<<binarySearch(array, n, key)<<endl;
return 0;
}*/

#include <bits/stdc++.h>
using namespace std;

int binarySearch(int array[], int size, int key){
   int s=0;
   int e=size;

   while(s<=e){
      int mid=(s+e)/2;

      if(array[mid]==key){
         return mid;
      }
      else if(array[mid]>key){
         e=mid-1;
      }
      else{
         s=mid+1;
      }
   }
   return -1;
}
int main(){
   int size, key;
   cout<<"array size: ";
   cin>>size;

   int array[size];
   cout<<"enter array: ";
   for(int i=0;i<size;i++){
      cin>>array[i];
   }

   cout<<"enter element to be find: ";
   cin>>key;
   cout<<binarySearch(array, size, key);
   return 0;
}