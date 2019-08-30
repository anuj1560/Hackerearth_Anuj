#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;										
    while(t--){
        string a,b;
        cin>>a>>b;
        int alpa1[26]={0};
        int alpa2[26]={0};
        for(int i=0;i<a.size();i++)
            alpa1[a[i]-97]++;
        for(int i=0;i<b.size();i++)
            alpa2[b[i]-97]++;
        int result=0;
        for(int i=0; i<26; i++) 
            result += abs(alpa1[i] - alpa2[i]);
        cout<<result<<endl;
    }
    return 0;
}
