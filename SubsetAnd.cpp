#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >>t;
	while(t--)
	{
	     int z,n,x;
	     int result=0;
	     cin>>z>>n;
	     for(int i=0;i<n;i++)
	     { 
	         int x; 
	         cin>>x; 
	         if(!(z&=x)) 
	         result=1; 
	     }
        if(result==1)
            cout<<"Yes"<<"\n";
        else
            cout<<"No"<<"\n";
	    
	}

    return 0;
}
