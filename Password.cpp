#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n; 
	cin >> n;
	vector<string> pwd(n);
	for(int i = 0; i < n; i++)
		cin >> pwd[i];
	int flag = 0;
	for(int i = 0; i < n; i++){
		if(flag == 1) break;
		for(int j = n-1; j >= 1; j--){
			if(pwd[i] != pwd[j] && pwd[i] == string(pwd[j].rbegin(),pwd[j].rend()))
			{
				int len = pwd[i].length();
				cout << len << ' ' << pwd[i][len/2] << endl;
				flag = 1;
				break;
			}	
		}
	}
 return 0;
}
