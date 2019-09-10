#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t; 
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int temp;
		set<int> st;
		map<int,int> freq;
		for(int i = 0; i < n; i++){
			cin >>temp;
			st.insert(temp);
			freq[temp]++;
		}
		int count = 0;
		int k; 
		for(set<int>::iterator i = st.begin(); i != st.end(); i++){
			k = freq[*i];
			if(k == 1) 
			    count++;
			else
			    count += ((k*k+k)/2); 
		}
		cout << count << endl;
	}

    return 0;
}
