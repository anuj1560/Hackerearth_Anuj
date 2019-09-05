#include <stdio.h>
#include <iostream>
#include <math.h>
#define ll unsigned long int
#define MAX 1000005 
using namespace std; 

ll prefixSum[MAX]; 
  

void calculatePrefixSum(ll arr[], ll n) 
{ 
    prefixSum[0] = arr[0]; 
    for (ll i = 1; i < n; i++) 
        prefixSum[i] = prefixSum[i - 1] + arr[i]; 
} 
  
 
ll findMean(ll l, ll r) 
{ 
    if (l == 0) 
      return floor(prefixSum[r]/(r+1)); 
  
    return floor((prefixSum[r] -  
          prefixSum[l - 1]) / (r - l + 1)); 
}

int main() {
        ll n,q,i;
	    scanf("%lu %lu",&n,&q);
	    ll a[n];
	    for(i=0;i<n;i++)
	        scanf("%lu",&a[i]);
	        calculatePrefixSum(a, n);
	    while(q--){
	        ll l,r;
	        cin >>l>>r;
	        cout<<findMean(l-1,r-1)<<"\n";
	    }

    return 0;
}
