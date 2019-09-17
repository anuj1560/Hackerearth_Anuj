#include <bits/stdc++.h>
using namespace std;

int arr[627509];

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  for(int i=1,count=0;count<627509;i++)
  if(__gcd(__builtin_popcount(i),int(log2(i)+1)-__builtin_popcount(i))==1) 
    arr[count++]=i;
  int t;
  cin>>t; 
  while(t--)
  {
  	int n; 
  	cin>>n; 
  	cout<<arr[n-1]<<endl;
  }
  return 0;
}
