#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int main() {
	int n;
	cin >> n;
	ll count=0;
	while(n--){
	    ll y;
	    cin >>y;
	    if(floor(log2(y))==ceil(log2(y)))
	    count++;
	}
	cout<<count<<endl;
	return 0;
}
