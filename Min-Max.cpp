#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
	cin >>a[i];
	sort(a,a+n);
	int i;
	for(i=1;i<n;i++){
	    if((a[i]-a[i-1])>1){
	    cout<<"NO"<<endl;
	    break;
	    }
	}
	if(i==n)
	cout<<"YES"<<endl;
}
