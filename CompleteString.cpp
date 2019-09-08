#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >>t;
	while(t--){
	    string s;
	    cin >>s;
	    int alpa[26]={0};
	    for(int i=0;i<s.size();i++)
	        alpa[s[i]-97]++;
	        int j;
	    for(j=0;j<26;j++){
	        if(alpa[j]==0){
	        cout<<"NO"<<endl;
	        break;
	        }
	    }
	    if(j==26)
	    cout<<"YES"<<endl;
	}

    return 0;
}
