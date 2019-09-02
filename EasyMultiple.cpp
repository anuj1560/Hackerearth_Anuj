#include <iostream>
typedef unsigned long long int ll;
using namespace std;

ll sum(ll n, ll m){
    ll a=n/m;
    ll prod=a*(a+1)/2;
    prod*=m;
    return prod;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >>t;
	while(t--){
	    ll n;
	    cin >>n;
	    ll result=0;
	    result=sum(n-1,3);
	    result+=sum(n-1,5);
	    result-=sum(n-1,15);
	    
	    
	    cout<<result<<endl;
	}

    return 0;
}
