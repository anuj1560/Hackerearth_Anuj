#include <bits/stdc++.h>
#define MAX 100000
#define ll unsigned long long int
using namespace std;

int prime[MAX+1]; 
  
void updatePrimes() 
{ 
    for(int i = 2; i <= MAX; i++)
        prime[i] = 1; 
    prime[0] =0;
    prime[1] =0; 
  
    for(int i = 2; i*i<= MAX;i++)
    { 
        if(prime[i] == 1)
        { 
            for(int j = i * i; j <= MAX; j += i) 
                prime[j] = 0; 
        } 
    }
  
    for (int i = 1; i <= MAX; i++)
        prime[i] += prime[i - 1]; 
    
} 
ll result(ll l, ll r) 
{ 
  
    ll total = r - l + 1; 
    ll composites;
    ll primes = prime[r] - prime[l - 1]; 
    if(l==1)
     composites = total-primes-1;
    else
     composites = total - primes; 
    return composites*primes; 
} 

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	updatePrimes();
	int t;
	cin >> t;
	while(t--)
	{
    ll l,r;
    cin >>l>>r;
    cout<<result(l,r)<<endl;
    }
return 0;
}

