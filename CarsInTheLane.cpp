#include <bits/stdc++.h>
using namespace std;

long long countSetBits(long long n) 
{ 
    if (n == 0) 
        return 0; 
    else
        return 1 + countSetBits(n & (n - 1)); 
}   

void fun(int n, long long a[])
{
    for(int i=1;i<=n;i++)
    cout<<pow(2,countSetBits(a[i]))<<endl;
}

int main()
{
	int t;
	cin>>t;
	long long a[t+1];
	for(int i=1;i<=t;i++)
        cin>>a[i];
    fun(t,a);
    return 0;
}
