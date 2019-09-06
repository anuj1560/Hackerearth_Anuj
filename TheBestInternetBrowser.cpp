#include <iostream>

using namespace std;

int main(){
int t,n,i,j;  
    char a[200];  
    cin >>t;  
    while(t--)  
    {  
        cin >>a;  
        i=4;  
        j=0;  
        while(a[i]!='.')  
        {  
            if(a[i]=='a' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='e')  
                   i=i+1;
            else  
            {  
                i=i+1;  
                j=j+1;  
            }  
        }  
     cout<<j+4<<"/"<<i+4<<endl;  
}  
    return 0;  
  }
