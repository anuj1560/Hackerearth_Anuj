#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	unsigned long long int n;
	cin >>n;
	unsigned long long int a[n-1];
	unsigned long long int sum=0;
	for(int i=0;i<n-1;i++){
	cin >>a[i];
	sum+=a[i];
	}
	cout<<(n*n)-sum;
	return 0;
}
