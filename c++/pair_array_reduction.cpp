//reduction of array means, suppose arr[]={10,16,7, 14,5,3,12,9}
//                                indices= 0  1  2  3  4 5  6 7

//          reduced array :  reducedArr[]={4, 7, 2, 6, 1,0, 5,3}
//                                indices= 0  1  2  3  4 5  6 7

//PROCESS: array sorted in ascending order with its original indices intact :-
//                                  arr[]={3, 5, 7, 9, 10, 12, 14, 16}
//                                indices= 5  4  2  7  0   6   3    1
//then allocate elements in reduced array by replacing elements in 
//original array using following scheme:-
//0 - 5th index element in original array 
//1 - 4th index element in original array 
//2 - 2nd index element in original array 
//3 - 7th index element in original array 
//4 - 0th index element in original array 
//5 - 6th index element in original array 
//6 - 3rd index element in original array 
//7 - 1st index element in original array 

#include <bits/stdc++.h>
using namespace std;

bool myCompare(pair<int, int> p1, pair<int, int> p2){
   return p1.first<p2.first;
}
int main(){
   int arr[]={10,16,7,14,5,3,2,9};
   vector< pair<int,int> > v;

   for(int i=0; i<=(sizeof(arr)/sizeof(arr[0])); i++){
      v.push_back(make_pair(arr[i],i));
   }
   sort(v.begin(), v.end(), myCompare);
   for(int i=0;i<v.size();i++){
      arr[ v[i].second ]=i;
   }
   for(int i=0;i<v.size();i++){
      cout<<arr[i]<<" ";
   }
   
   return 0;
}