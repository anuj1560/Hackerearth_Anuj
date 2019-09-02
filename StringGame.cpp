#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >>t;
	while(t--){
	    string s;
	    cin >>s;
	    int flag=0;
	    sort(s.begin(),s.end());
	    int i=0;
	    while(s[i+1]!='\0'){
	        if(s[i]==s[i+1])
	        i++;
	        else{
	        flag=1-flag;
	        i++;
	        }
	    }
	    if(flag==1)
	    cout<<"Player2"<<endl;
	    else
	    cout<<"Player1"<<endl;
	    
	}

    return 0;
}
