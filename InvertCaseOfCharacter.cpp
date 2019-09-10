#include <bits/stdc++.h>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	string s;
	getline(cin,s);
	int l, r;
	cin >> l >> r;
	if(isupper(s[l-1]))
	    s[l-1] = tolower(s[l-1]);
	else 
	    s[l-1] = toupper(s[l-1]);
	
	if(isupper(s[r-1])) 
	    s[r-1] = tolower(s[r-1]);
	else 
	    s[r-1] = toupper(s[r-1]);
	cout<<s.c_str()<<endl;
	
	return 0;
}
