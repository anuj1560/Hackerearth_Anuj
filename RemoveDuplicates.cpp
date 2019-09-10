#include <iostream>
#include <map>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
	while(getline(cin,s)){
		map<char,int> freq;
		for(int i = 0;i<s.size();i++){
			freq[s[i]]++;
			if(freq[s[i]] == 1) 
			    cout <<s[i];
		}
		cout << endl;
	}
return 0;
}
