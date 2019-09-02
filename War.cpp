#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;									
	while(num--){
	    int n;
	    cin >>n;
	    
	    int bob=0;
	    int b[n];
	    for(int i=0;i<n;i++){
	    cin >>b[i];
	    bob = max(bob, b[i]);
	    }
	    int alice=0;
	    int a[n];
	    for(int i=0;i<n;i++){
	    cin >>a[i];
	    alice = max(alice, a[i]);
	    }
	    
	    if(bob>alice)
	    cout<<"Bob"<<endl;
	    else if(alice>bob)
	    cout<<"Alice"<<endl;
	    else
	    cout<<"Tie"<<endl;
	}
	return 0;
	}
