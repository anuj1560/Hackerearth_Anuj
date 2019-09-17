#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin >>n;
	int result=0;
	for(int i=0;i<n;i++)
	{
	    int temp;
	    cin >>temp;
	    result|=temp;
	}
	    cout<<result<<endl;

    return 0;
}
