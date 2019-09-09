#include <iostream>
#include <set>
#define ll unsigned long long int
using namespace std;

int main() {
	int t,x,n; 
	cin >>t;
	while(t--){
		cin >>n>>x; 
		ll m;
		set<ll> dst;
		for(int i = 0; i < n; i++){
			cin >>m; 
			dst.insert(m);
		}
		
		if(dst.size() == x) 
		    cout <<"Good"<<"\n";
		else
			cout<<(dst.size() < x ? "Bad" : "Average");
		cout<<"\n";
	}
	return 0;
}
