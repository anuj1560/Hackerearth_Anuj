#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;									
	if(num%15==0)
	cout<<"AngelHack!";
	else if(num%3==0)
	cout<<"Angel";
	else if(num%5==0)
	cout<<"Hack";
	else
	cout<<num;
	return 0;
}
