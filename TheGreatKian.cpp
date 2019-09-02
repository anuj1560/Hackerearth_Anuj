#include <iostream>
typedef long long ll;

using namespace std;

int main() {
	int n;
	cin >>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin >>a[i];
	for(int i=0;i<3;i++){
    ll res=0;
    for(int j=i;j<n;j+=3) 
    res+=a[j];
    cout<<res<<" ";
  }

    return 0;
}
