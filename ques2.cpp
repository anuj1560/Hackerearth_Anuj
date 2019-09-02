#include <iostream>

using namespace std;

int main() {
	int n,x,y;
	cin >> n>>x>>y;
	int a[n];
	int i;
	for( i=0;i<n;i++){
	cin >>a[i];
	if(a[i]<x || a[i]>y){
	cout<<"NO";
	break;
	}
	}
	if(i==n)
	cout<<"YES";
	return 0;
}
