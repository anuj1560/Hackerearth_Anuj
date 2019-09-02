#include <iostream>

using namespace std;

int main() {
	string s;
	cin >>s;
	int count=1;
	int i;
	for(i=1;i<s.size();i++){
	    if(s[i]==s[i-1]){
	        count++;
	        if(count==6){
	        cout<<"Sorry, sorry!"<<endl;
	        break;
	    
	        }
	        }
	    else
	    count=1;
	}
	 if(count!=6)
	 cout<<"Good luck!"<<endl;

    return 0;
}
