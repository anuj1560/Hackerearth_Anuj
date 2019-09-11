#include <iostream>
using namespace std;

int main() 
{
	int t,n,x,y,z;
	cin >> t;										
	while(t--){
	   cin >> n>>x>>y>>z;
	   int a[n];
	   int mxm=0;
	   for(int i=0;i<n;i++)
	        cin >>a[i];
    
      for(int i=0;i<n;i++)
      {
        while(a[i]%x==0)
            a[i] = a[i]/x;
        while(a[i]%y==0)
            a[i] = a[i]/y;
        while(a[i]%z==0)
            a[i] = a[i]/z;
      }
        int j;
        for(j=1;j<n;j++)
        {
            if(a[j]!=a[j-1])
            {
                cout<<"She can't"<<"\n";
                break;
            }
        }
        if(j==n)
            cout<<"She can"<<"\n";
    }
	   return 0;
}
