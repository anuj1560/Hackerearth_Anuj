#include <iostream>

using namespace std;

int main() {
	string s;
	cin >> s;
	int i = 0; 
    int n = s.size() - 1; 
  
    while (n > i) 
    { 
        if (s[i++] != s[n--]) 
        { 
           cout<< "NO"<<endl;
            return 0;; 
        } 
    } 
   cout<<"YES"<<endl;
}
