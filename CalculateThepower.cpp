#include <iostream>
#define ll unsigned long long int
#define mod 1000000007
using namespace std;

ll Exp(ll b, ll e){
	
	ll x = 1, y = b;
    while(e > 0) {
        if(e%2 == 1) {
            x=(x*y);
            if(x>mod) x%=mod;
        }
        y = (y*y);
        if(y>mod) y%=mod;
        e /= 2;
    }
    return x;
	
}
int main(){
	
	ll base, exponent, x = 1;
	cin >>base>>exponent;
	cout<<Exp(base,exponent)%mod<<"\n";

	return 0;
}
