#include <iostream>

using namespace std;

long long countSetBits(long long num){
    if(num==0)
    return 0;
    return (num & 1) + countSetBits(num >> 1);
}

int main() {
	int t;
	cin >>t;
	while(t--){
	    long long n;
	    cin >>n;
	    cout<<countSetBits(n)<<endl;
	    }

    return 0;
}
