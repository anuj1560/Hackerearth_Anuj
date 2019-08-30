#include <iostream>

using namespace std;

int main() {
	string s;
	cin >> s;										// Reading input from STDIN
	int l = 0; 
    int h = s.size() - 1; 
  
    while (h > l) 
    { 
        if (s[l++] != s[h--]) 
        { 
           cout<< "NO"<<endl;
            return 0;; 
        } 
    } 
   cout<<"YES"<<endl;
}
