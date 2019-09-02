#include <iostream>

using namespace std;

int main() {
	int n,q;
	cin >>n>>q;
	
	int a[n];
	for(int i=0;i<n;i++)
	cin >>a[i];
	
	while(q--){
	    int type;
	    cin >>type;
	    if(type==1){
	        int x,y;
	        cin >>x>>y;
	        a[x]=y;
	    }
	    else{
	        int l,r;
	        cin >>l>>r;
	        unsigned long long int sum=0;
	        for(int i=l;i<=r;i++)
	        sum+=a[i];
	        cout<<sum<<endl;
	    }
	}
	return 0;
}
