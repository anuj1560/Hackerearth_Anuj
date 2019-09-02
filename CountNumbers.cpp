#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){	
    int n;
    cin >>n;
    string s;
    cin >>s;
    int count=0;
    for(int i=0;i<n;i++){
        if(s[i]>='0' && s[i]<='9')
        {
            while(s[i+1]>=0 &&s[i+1]<='9'){
                i++;
            }
            count++;
        }
    }
    cout<<count<<endl;
	    
	}
return 0;
}
