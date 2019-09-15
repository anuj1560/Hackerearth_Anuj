#include <iostream>
using namespace std;
const int MX = 100005;

int a[MX+1];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	    int n,q;
	    cin >>n>>q;
	    int a[n];
	    for(int i=1;i<=n;++i)
	    { 
	        int x; 
	        cin>>x; 
	        a[i]=a[i-1]+bool(x&(x>>1));
	    }
	    while(q--)
	    {
	        int l,r;
	        cin >>l>>r;
	        cout<<a[r]-a[l-1]<<endl;
	    }
 
    return 0;
} 
