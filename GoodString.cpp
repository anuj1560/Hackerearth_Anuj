#include <iostream>

using namespace std;

int main() {
	    string s;
	    cin >>s;
	    int alpa[26]={0};
	    for(int i=0;i<s.size();i++)
	    alpa[s[i]-97]++;
	    int count=0;
	    for(int i=0;i<26;i++){
	        if(alpa[i]>1)
	        count+=alpa[i]-1;
	    }
	    
	cout<<count<<endl;

    return 0;
}
