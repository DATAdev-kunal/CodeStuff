#include <iostream>
using namespace std;

int main(){
// n- no. of rows
// m- no. of columns

   int n,m; 
   cin>>n>>m;

// declaring 2d array
   int arr[n][m];

//  array input 
   for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
         cin>>arr[i][j];
      }
   }
// array output
   for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
         cout<<arr[i][j]<<" ";
      }
      cout<<endl;
   }
//searching in array
   int x;
   cout<<"enter the no. to be searched !"<<endl;
   cin>>x;
   
   bool flag=false;

   for(int i=0;i<n;i++){
      for(int j=0;j<m;j++){
         if(arr[i][j]==x){
            cout<<"coord: "<<i<<" "<<j<<endl;
            flag= true;
         }
      }
   }

   if(flag){
      cout<<"element is found !"<<endl;
   }else{
      cout<<"element not found !"<<endl;
   }
   return 0;
}