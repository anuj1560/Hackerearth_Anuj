#include <iostream>
using namespace std;

int main() {
	int num;
	cin >> num;										
	while(num--){
	    string s;
	    cin >>s;
	    int n=s.size();
	    string sb="";
	    int i,j;
	    for(i=0,j=n-1;i<n&&j>=0;i++,j--){
	        int temp = ((s[i] - 97)+ (s[j] - 97 ) +98 );
	        if(temp>122)
	        temp-=26;
	        sb+=char(temp);
	    }
	cout<<sb<<endl;
	}
	return 0;
}
