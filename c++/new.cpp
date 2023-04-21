#include<iostream>
using namespace std;

void swap(int xp, int yp){
    int temp = xp;
    xp = yp;
    yp = temp;
}

void bubbleSort(int arr[], int n){
    int i,j;
    bool swapped;
    for(i =0;i<n;i++){
        if(swapped = false){
         for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                swapped = true;}
            }
        }
        if(swapped == false)
            break;
    }
}

int main(){
    int n;
    cout<<"enter the no. of elements"<<endl;
    cin>>n;
    cout<<"enter array input"<<endl;
    int arr[n];
    
   
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int x= sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, x);

    cout<<"\nSorted array is:\n";
        for(int i =0;i<x;i++){
        cout<<arr[i]<<" ";
        }
    return 0;
}