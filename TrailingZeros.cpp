#include <iostream>
using namespace std;
int main() {
	int n;
	cin >>n;
	int temp;
	int count=0;
	int divisor=5;
	while(divisor<=n)
	{
	  temp=n/divisor;
	  count=count+temp;
	  divisor*=5;
	}
	cout<<count<<endl;
	return 0;
}
