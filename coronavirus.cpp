#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin >>n;
	cout<<"YES"<<endl;
    cout<<__builtin_popcount(n)<<endl;
    int a[32]={0};
    int i=0;
    while(n>0){
        a[i]=n%2;
        n/=2;
        i++;
    }
    for(int j=0;j<i;j++){
        if(a[j]==1)
        cout<<j<<" ";
    }
    return 0;
}

