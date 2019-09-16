#include <iostream>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin >>n;
	int result=0;
	while(n)
	{
	    result^=n;
	    n>>=1;
	}
    cout<<result<<endl;   
 return 0;
}
