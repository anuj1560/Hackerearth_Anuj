#include <iostream>

using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    int n;
	    cin >>n;
	    int count=0;
	    for(int i=1;i<=n-1;i++)
	    {
	        for(int j=i+1;j<=n;j++){
	            if((i^j)<=n)
	                count++;
	        }
	    }
    cout<<count<<endl;
	}
    return 0;
}
