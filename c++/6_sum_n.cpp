#include <iostream>
using namespace std;
int main(){

                      //using while loop
   /* int x,N,sum;
   sum=0;
   x=0;
   cout<<"Enter the no. :"<<endl;
   cin>>N;

   while(x<=N){
      sum=sum + x;
      x++;
   }
   cout<<"sum is: "<<sum;
   return 0; */

                     //using for loop
   int N,sum=0;
   cout<<"Enter the no. :";
   cin>>N;

   for(int counter=0;counter<=N; counter++){
      sum+=counter;
   }
   cout<<"sum till "<<N<<" is: "<<sum<<endl;
   return 0;
}