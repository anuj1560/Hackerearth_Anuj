#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	string s;
	cin >>s;
	int mxm=0;
	int count=0;
	for(int i=0;i<s.size();i++)
	{
	    int j;
	    for(j=i;j<s.size();j++)
	    {
	        if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')
	            count++;
	        else
	        {
	            if(mxm<count)
	                mxm=count;
	            count=0;
	            i=j+1;
	            
	        }
	    }
	    if(j==s.size())
	    break;
	}
	if(mxm<count){
	    mxm=count;
	    cout<<mxm;
	}
	else
	cout<<mxm;

    return 0;
}
