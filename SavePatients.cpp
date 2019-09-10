#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n; 
	cin >> n;
	int p[n];
	int v[n];
	for(int i = 0; i < n;i++) 
	    cin >>v[i];
	for(int i = 0; i < n;i++)
	    cin >>p[i];
	sort(v,v+n);
	sort(p,p+n);
	int count=0;
	for(int i = 0; i < n; i++){
		if(v[i] > p[i])
		    count++;
	}
	
	cout<<(count== n ? "Yes" : "No"); 

    return 0;
}
