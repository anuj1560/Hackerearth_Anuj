#include <iostream>
typedef unsigned long long int ll;
using namespace std;

int main() {
	
	    int p,s,t,h,x;
	    cin >>p>>s>>t>>h>>x;
	    ll sum=0;
	    for(int i=1;i<=x;i++)
	        {
	            if(s-i>=t)
	                sum+=p;
	            else
	                sum+=h;
	        
	        }
	    
	cout<<sum<<endl;

    return 0;
}
