#include <iostream>

using namespace std;

int main() {
    string s;
	cin >> s;
    int x=0,y=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='L')
        x--;
        else if(s[i]=='R')
        x++;
        else if(s[i]=='D')
        y--;
        else
        y++;
    }
    cout<<x<<" "<<y<<endl;
}
