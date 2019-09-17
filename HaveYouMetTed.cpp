#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >>t;
	while(t--)
	{
	    int n;
	    int result=1e9; 
	    cin>>n;
	    for(int i=0;i<n;i++)
	    { 
	        int temp;
	        cin>>temp;
	        result=min(result,__builtin_popcount(temp));
	    }
        cout<<result<<endl;
	 }
    return 0;
}
