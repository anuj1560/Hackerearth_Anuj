#include <iostream>

using namespace std;

int main() {
	string s;
	cin >>s;
	int count=0;
	for(int i=0;i<s.size();i++)
	  {
	          if(s[i]!='6')
	             count++;
	  
	       }
	  if(s[s.size()-1]=='6')
    cout<<-1<<endl;
    else
    cout<<count<<endl;
    return 0;
}
