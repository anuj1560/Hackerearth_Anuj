#include <iostream>

using namespace std;

int main() {
	    int n;
	    cin >>n;
	    int m=2*n+1;
	    int a[m];
	    for(int i=0;i<m;i++)
	    cin >>a[i];
	    int result=0;
	    for(int i=0;i<m;i++)
        result = result ^ a[i]; 
	    cout<<result<<endl;

    return 0;
}
