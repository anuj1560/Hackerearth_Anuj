#include <iostream>
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main() {
	ll t;
	cin >>t;
	while(t--){
	    ll n;
	    cin >>n;
	    ll a[n];
	    ll sum=0;
	    for(ll i=0;i<n;i++){
	    cin >>a[i];
	    if(a[i]>0)
	    sum+=a[i];
	    }
	    if(sum==0)
	    cout<<"No"<<endl;
	    else if(ceil(log2(sum)) == floor(log2(sum)))
	    cout<<"Yes"<<endl;
	    else
	    cout<<"No"<<endl;
	    
	}

    return 0;
}
