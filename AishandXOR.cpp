#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	    int n;
	    cin >>n;
	    int a[n];
	    for(int i=1;i<=n;i++)
	    cin >>a[i];
	    int q;
	    cin >>q;
	    while(q--){
	        int l,r;
	        cin >>l>>r;
	        int count=0;
	        for(int i=l;i<=r;i++){
	            if(a[i]==0)
	            count++;
	        }
	        int sum=r-l+1-count;
	        if(sum%2==0)
	        cout<<"0"<<" "<<count<<endl;
	        else
	        cout<<"1"<<" "<<count<<endl;
	    }
	    

    return 0;
}
