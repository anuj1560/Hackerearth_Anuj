#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t; 
	cin >>t;
	while(t--){
	    ll n;
	    cin >>n;
	    cout<<(n|(~n&(n+1)))<<endl;
	}
	return 0;
}
