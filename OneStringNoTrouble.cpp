#include <bits/stdc++.h>
using namespace std;
 
int result(string s) 
{ 
    int count = 1; 
    int mxm = 1; 
  
    int n = s.size(); 
 
    for (int i = 1; i < n; i++) { 
  
        if (s[i] != s[i - 1]) 
            count++; 
        else { 
            mxm = max(count, mxm); 
            count = 1; 
        } 
    } 
    mxm = max(count, mxm); 
  
    return mxm; 
}
  
int main() {
	string s;
	cin >>s;
	cout<<result(s)<<endl;
return 0;	
}
