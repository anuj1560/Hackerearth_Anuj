#include <iostream>
typedef unsigned long long int ll;
using namespace std;

int main() {
	    ll n;
	    cin >>n;
	    ll a[n];
	    for(ll i=0;i<n;i++)
	    cin >>a[i];
	    ll moves=0;
	    for(ll i=1;i<n;i++){
	      if(a[i]<a[i-1]){
	    moves+=(a[i-1]-a[i]+1);
	      a[i]=a[i-1]+1;
	      
	    }
	    }
	  cout<<moves<<endl;  

    return 0;
}
