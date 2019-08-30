#include <iostream>
typedef unsigned long long int ll;
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    ll p;
	    cin >>p;
	    ll count = 0; 
    while (p) 
    { 
    count += p & 1; 
    p >>= 1; 
    } 
    cout<< count<<endl; 
}

    return 0;
}
