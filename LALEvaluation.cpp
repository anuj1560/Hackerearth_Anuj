#include <bits/stdc++.h>

using namespace std;
int getCount(int a[], int n, int k) 
{ 
    unordered_map<int, int> m; 
    for (int i=0; i<n; i++) 
        m[a[i]]++; 
  
    int count = 0; 
    for (int i=0; i<n; i++) 
    { 
        count += m[k-a[i]]; 
  
        if (k-a[i] == a[i]) 
            count--; 
    } 
  
    return count/2; 
}
int main() {
	int n,k;
	cin >> n>>k;										
	int a[n];
	for(int i=0;i<n;i++)
	    cin >>a[i];
	 cout<<getCount(a,n,k);
}
