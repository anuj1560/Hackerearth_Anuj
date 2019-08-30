#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,i,j;
    cin >>t;
    while(t--){
        cin >>n;
        int a[n];
        long long odd=0,even=0;
        for(i=0;i<n;i++){
        cin >>a[i];
        if(a[i]%2==1)
        odd++;
        else
        even++;
        }
        cout<<odd*even<<endl;
    }
    return 0;
}
