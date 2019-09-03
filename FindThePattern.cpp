#include <iostream>
#include <bits/stdc++.h>
#define ll unsigned long long int
using namespace std;

int main() {
	ll n;
	cin >> n;
	ll a[n];
	//int mnm=INT_MAX;
	//int mxm=INT_MIN;
	for(ll i=0;i<n;i++){
	    cin >>a[i];
	}
	sort(a,a+n);
	ll sum=a[0]+a[n-1];
	cout<<sum<<endl;

    return 0;
}
