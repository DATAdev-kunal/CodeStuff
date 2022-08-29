/* Isyanaa is given the number of visitors at her local theme park onNconsecutive days.The
number of visitors on thei-th day is V₁.Aday is record breaking iff it satisfies both of the
following conditions:
    The number of visitors on the day is strictly larger than the number of visitors on each
    of the previous days.
    Either it is the last day,orr the number of visitors on the day is strictly larger than the
    number of visitors on the following day.
Note that the very first day could bearecord breaking day.
Please help Isyana find out the number of record breaking days. */

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n+1];
    arr[n]=-1;

    for(int i=0;i<n;i++){
        cin>>arr[i];        
    }

    int ans=0;
    int mx=-1;

    for(int j=0;j<n;j++){
        if(n==1){
            cout<<"1"<<endl;
            return 0;
        }
        if(arr[j]>mx && arr[j]>arr[j+1]){
            ans++;
        }
        mx= max(mx, arr[j]); 
    }
    cout<<ans<<endl;
    
    return 0;
}