#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >>t;
	while(t--)
	{
	    int o,n,i;  
        cin>>o>>n;  
        int arr[n];  
        for(i=0;i<n;i++)  
            cin>>arr[i];  
        for(i=0;i<n;i++)
        {  
            if(arr[i]==1)  
                o+=2;  
            else  
                o-=1;  
            if(o<=0)  
            break;  
        }  
        if(i<n-1) 
            cout<<"No"<<" "<<i+1<<endl;  
  
        else  
            cout<<"Yes"<<" "<<o<<endl; 
    }  

    return 0;
}
