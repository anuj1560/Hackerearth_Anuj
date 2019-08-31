#include <iostream>
#define ll unsigned long int
using namespace std;

ll countSetBits(ll n) 
{ 
    if (n == 0) 
        return 0; 
    else
        return 1 + countSetBits(n & (n - 1)); 
} 

int main() {
	ll t;
	cin >> t;
	while(t--){
	    ll n;
	    cin >>n;
	    cout<<countSetBits(n)<<endl;
	}
	return 0;
}
