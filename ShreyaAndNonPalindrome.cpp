#include <iostream>

using namespace std;

int main() {
	string s;
	cin >> s;
	int n=s.size();
	int count=0;
	for(int i=n-1;i>=0;i--){
	    if(s[0]==s[i])
	    count++;
	    else
	    break;
	}
	cout<<n-count<<endl;
}
