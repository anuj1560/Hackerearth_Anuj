#include <iostream>

using namespace std;

int main() {
	string s;
	cin >> s;
	int alpa[26]={0};
	for(int i=0;i<26;i++)
	alpa[i]=i+1;
	int sum=0;
	for(int i=0;i<s.size();i++)
        sum+=alpa[s[i]-97];
	cout<<sum<<endl;
	return 0;
}
