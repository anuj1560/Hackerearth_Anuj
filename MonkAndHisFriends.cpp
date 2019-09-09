#include <iostream>
#include <set>
#define ll unsigned long long int
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >>t;
	while(t--){
	    int n,m;
	    cin >>n>>m; 
	    ll temp;
		set<ll> mp;
		for(int i = 0; i < n; i++){
			cin >>temp;
			mp.insert(temp);
		}
		
		for(int i = 0; i < m; i++){
			cin >>temp;
			if(mp.count(temp))
				cout<<"YES"<<"\n";
			else {
				mp.insert(temp);
				cout<<"NO"<<"\n";
			}
		}
	    
	    
	}

    return 0;
}
