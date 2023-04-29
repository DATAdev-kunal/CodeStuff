#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	
	int cnt=0;
	int arr[cnt+1];
	
	for(int i=n;i>0;i--){
	    if(n%i==0){
	       arr[i]=i;
			 cnt++;
	    }
	}arr[0]=cnt;
	for(int i=0;i<n;i++){
		cout<<arr[i];
		}
	return 0;
}
	
	
/* #include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	
	int cnt=0;
	int arr[cnt+1];
	for(int i=1;i<=n;i++){
	    if(n%i==0){
	        cnt++;
			  arr[0]=cnt;
			  arr[i]=i;
	    }
	}
	for(int i=0;i<=n;i++){
		cout<<arr[i];
	}
	return 0;
}
 */