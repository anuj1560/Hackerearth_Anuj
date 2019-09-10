#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	char g[10000];
	cin >>g; 
	int n = strlen(g); 
	g[n] = '\0';
	vector<int> v(n);
	for(int i = 0; i < n; i++){
		for(int j = i; j < n; j++)
			if((g[j]-48)%2 == 0)
				v[i]++;
	}
		
	for(int i = 0; i < n; i++)
		cout<<v[i]<<" ";

    return 0;
}
