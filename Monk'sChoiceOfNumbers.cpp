#include <bits/stdc++.h>
using namespace std;

int a[1000];

int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin>>t; 
  while(t--)
  {
    int n,k;
    cin>>n>>k;
    for(int i=0;i<n;++i)
    { 
        int x;
        cin>>x;
        a[i]=__builtin_popcount(x); 
    }
   sort(a,a+n,greater<int>());
    int sum=0;
    for(int i=0;i<k;i++)
        sum+=a[i];
    cout<<sum<<endl;
      
  }
  return 0;
}
