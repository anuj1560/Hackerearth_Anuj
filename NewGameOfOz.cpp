#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >>t;
	while(t--){
	    int n;
	    cin >>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin >>a[i];
	    sort(a,a+n);
	    int i=0;
	    int count=0;
	    while(i<n){
	        if(i<n-1 && a[i+1]==a[i]+1){
	        count++;
	        i+=2;
	        }
	        else{
	        count++;
	        i++;
	        }
	    }
            cout<<count<<endl;	    
	    }
	    

    return 0;
}
