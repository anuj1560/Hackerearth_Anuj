#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;				
	int a[n];
	for(int i=0;i<n;i++)
	cin >>a[i];
	unsigned long long int m=pow(10,9);
	m+=7;
	unsigned long long int prod=1;
	for(int i=0;i<n;i++)
	prod=(prod*a[i])%m;

    cout<<prod<<endl;
}
