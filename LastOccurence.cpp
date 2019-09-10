#include <iostream>

using namespace std;

int main() {
	int n,k;
	cin >> n>>k;
	int a[n];
	for(int l=1;l<=n;l++)
	    cin >>a[l];
	int i;
	for(i=n;i>0;i--){
	    if(k==a[i]){
	    cout<<i<<endl;
	    break;
	    }
	}
	if(i==0)
	cout<<"-1"<<endl;
	return 0;
}
