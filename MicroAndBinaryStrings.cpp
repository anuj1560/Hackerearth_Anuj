#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >>t;
	while(t--){
	    int n;
	    cin >>n;
	    string s;
	    cin >>s;
	    int count=0;
	    for(int i=0;i<s.size();i++){
	        if(s[i]=='1')
	        count++;
	    }
	    cout<<count<<"\n";
	    
	}

    return 0;
}
