#include <bits/stdc++.h>
#define ll long long
#define M 1000000007
using namespace std;

int main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
	ll t;
	cin >>t;
	while(t--){
	string s;
	cin >>s;
	ll result=1;
	for(int i=0;i<s.size()-1;i++)
	    result=(result<<1)%M;
	 cout<<result<<"\n";
	}
	return 0;
	
}
