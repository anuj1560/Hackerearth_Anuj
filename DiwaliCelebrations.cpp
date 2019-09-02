#include <iostream>

using namespace std;

int main() {
	int s;
	cin >>s;
	while(s--){
	    int a,n,k;
	    cin >>a>>k>>n;
	    int sum=a;
	    while(n-1){
	        sum+=k;
	        n--;
	    }
	    cout<<sum<<endl;
	}

    return 0;
}
