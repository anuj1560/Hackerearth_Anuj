#include <iostream>
#define ll long long int
using namespace std;

ll modExp(ll a, ll b) 
{ 
    ll result = 1; 
    while (b > 0) { 
        if (b & 1) 
            result = result * a; 
        a = a * a; 
        b /= 2; 
    } 
  
    return result; 
} 
  
 
ll check(ll num) 
{ 
    if (num %2== 1 || num < 3) 
        return -1; 
  
    else if (num % 4 == 0) 
        return modExp(num / 4, 4); 
  
    else if (num % 6 == 0) 
        return modExp(num / 3, 2) * modExp(num / 6, 2); 
  
 
    else if (num % 10 == 0) 
        return modExp(num / 5, 2) * (num / 10) * (num / 2); 
  
    else
        return -1; 
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >>t;
	while(t--){
	    ll n;
	    cin >>n;
	   cout<<check(n)<<endl;
	}

    return 0;
}

