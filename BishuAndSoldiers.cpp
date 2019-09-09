#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;					
	int a[n];
	for(int i=0;i<n;i++)
	    cin>>a[i];
	sort(a,a+n);
	int q;

	cin >>q;
	while(q--){
	    int m;
	    cin >>m;
	    int i=0;
	    int count=0;
	    int sum=0;
	    while(a[i]<=m && i<n){
	    count++;
	    sum+=a[i];
	    i++;
	    }
	    cout<<count<<" "<<sum<<endl;
	}
}
