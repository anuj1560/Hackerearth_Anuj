#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >> t;			
	while(t--){
	    int n;
	    cin >>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin >>a[i];
	    int sum=0;
	    for(int i=0;i<n;i++){
	        int m=ffs(a[i]);
	        m--;
	        sum+=pow(2,m);
	    }
	    cout<<sum<<endl;
	}
}
