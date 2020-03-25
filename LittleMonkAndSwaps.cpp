#include <bits/stdc++.h>
#define ll unsigned long long int

using namespace std;

void inorder(int a[], vector<int> &v,  
                        int n, int i) 
{ 
    
    if(i >= n) 
        return; 
    inorder(a, v, n, 2*i + 1);  
    v.push_back(a[i]); 
    inorder(a, v, n, 2*i + 2); 
} 

int swaps(vector<int> &v) 
{ 
    vector<pair<int,int> > t(v.size()); 
    int ans = 0; 
    for(int i = 0; i < v.size(); i++)
	{
        t[i].first = v[i];
		t[i].second = i; 
	} 
    sort(t.begin(), t.end()); 
    for(int i = 0; i < t.size(); i++) 
    { 
        if(i == t[i].second) 
            continue; 
        else
        {  
            swap(t[i].first, t[t[i].second].first); 
            swap(t[i].second, t[t[i].second].second); 
        } 
           
        if(i != t[i].second) 
            --i; 
        ans++; 
    } 
    return ans; 
} 
   
int main() 
{ 
    int n;
	cin >>n;
    int a[n];
	for(int i=0;i<n;i++)
		cin >>a[i];
    vector<int> v; 
    inorder(a, v, n, 0); 
	
    cout << swaps(v) << endl; 
}
