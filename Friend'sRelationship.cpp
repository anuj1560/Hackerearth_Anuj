#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >>n;
	   for(int i=1;i<=n;i++){
	       int k=i;
	       while(k--)
	       cout<<'*';
	       for(int j=1;j<=2*(n-i);j++)
	       cout<<'#';
	       int l=i;
	       while(l--)
	       cout<<'*';
	       cout<<endl;
	       }
	}    

    return 0;
}
