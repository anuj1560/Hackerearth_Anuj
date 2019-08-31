#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long int 
using namespace std;
int main()
{
	
	ll t;
	cin >>t;
	while(t--)
	{
		ll p,q;
		cin >>p>>q;
 
		if( (q-p) == 1) 
			cout<<(p&q)<<endl;
		
 
		else
		{
				if(q%2==0)
					cout<<(q-2)<<endl;
				else
					cout<<(q-1)<<endl;
 
		}
	}
		return 0;
}
