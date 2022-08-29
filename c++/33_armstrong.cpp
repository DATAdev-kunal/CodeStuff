 #include <iostream>
using namespace std;

int main(){
   /* #ifndef ONLINE_JUDGE
      freopen("intput.txt","r",stdin);
      freopen("output.txt","w",stdout);
   #endif */

   int n;
   cin>>n;

   int sum=0;
   int originaln = n;
   while(n>0){
      int lastdigit= n%10;
      sum= sum + lastdigit*lastdigit*lastdigit;
      n=n/10;
   }
   if(sum==originaln){

      cout<<"Armstrong"<<endl;
   }else{
      cout<<"Non-Armstrong"<<endl;
   }
   return 0;
}

/*
#include <iostream> 
using namespace std;
 int main() { 
    int n; 
    cin >> n;
     int sum = 0, org_num = n;
      while (n > 0) { 
         int rem = n % 10;
         sum = sum + rem * rem * rem;
         n = n / 10; 
 }
 if (org_num == sum) { 
    cout << "Armstrong Number\n"; 
    } else { cout << "Not Armstrong Number\n"; }
    return 0;
     }*/