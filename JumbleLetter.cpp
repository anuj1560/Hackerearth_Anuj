#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >>t;
	while(t--){
	   char s[100]; 
	   cin >>s; 
	   int k = 0, 
	   n = strlen(s); 
	   s[n] = '\0';
	   char j[200];
		
		for(int i = 0; i < n; i++){
			char c = tolower(s[i]);
			if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y'){
				j[k] = '.';
				j[k+1] = tolower(s[i]);
				k += 2;
			}     
		}
		j[k] = '\0';
		
		cout <<j<<"\n";
	}

    return 0;
}
