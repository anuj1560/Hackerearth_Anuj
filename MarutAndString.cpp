#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int t; 
    cin >>t;
	if(t <= 10 && t != 0){
		while(t--){
			string s;
			cin >>s;
			int n = s.size();
			if(n <= 100 && n >= 1)
			{
				int a[2]={0};
				for(int i = 0; i < n; i++){
					if(s[i]>= 65 && s[i] <= 90) 
					    a[0]++;
					else if(s[i]>= 97 && s[i] <= 122)
					    a[1]++;
				}
				
				if(a[0] == a[1] && a[0] == 0)
				    cout<<"Invalid Input"<<"\n";
				else if((a[0] == 0 && a[1] > 0) || (a[1] == 0 && a[0] > 0)) 
				    cout<<"0"<<"\n";
				else if(a[0] > 0 && a[1] > 0)
				    cout <<min(a[0],a[1])<<"\n";
			}
			else 
			    cout<<"Invalid Input"<<"\n";
		}
		
	}
	else 
	    cout<<"Invalid Test"<<"\n";

    return 0;
}
