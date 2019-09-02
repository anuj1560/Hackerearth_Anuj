#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;										
	while(t--){
	    int n;
	    cin >>n;
	    int a[n];
	    for(int i=1;i<=n;i++)
	    cin >>a[i];
	    int u,v;
	    if(a[1]!=0)
	        cout<<"Incorrect "<<a[1]<<endl;
	    else {  
	    
	    if(a[2]==2)
	    u=1,v=2;
	   else if(a[2]==6)
	    u=1,v=3;
	    else if(a[2]==14)
	    u=1,v=4;
	    else if(a[2]==4)
	    u=2,v=3;
	   else if(a[2]==12)
	    u=2,v=4;
	    else if(a[2]==8)
	    u=3,v=4;
	    else
	    {
	        cout<<"Incorrect "<<a[2]<<endl;
	        continue;
	    }
	    }
	    unsigned long long int temp;
	    int i;
	    for(i=3;i<=n;i++){
	        temp=pow(i,v)-pow(i,u);
	        if(a[i]!=temp){
	        cout<<"Incorrect "<<a[i]<<endl;
	            break;
	        }
	    }
	    if(i==n+1)
	    cout<<"Correct"<<endl;
	}
	return 0;
}

