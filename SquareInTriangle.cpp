#include <iostream>

using namespace std;

int maxSquare(int b, int x) 
{ 
    
    return (b / x - 1) * (b / x) / 2; 
} 
int main() {
	int t;
	cin >> t;	
	while(t--){
	    int x,b;
	    cin >>x>>b;
	    int result=maxSquare(b,x);
	    cout<<result<<endl;
	    
	}
}
