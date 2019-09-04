#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int n;
	cin >>n;
	int d[n],b[n];
	int mxm1=0;
	int mxm2=0;
	for(int i=0;i<n;i++)
	    cin >>d[i];
    for(int i=0;i<n;i++)
        cin >>b[i];
    for(int i=1;i<n;i++){
	  if(mxm1<abs(d[i]-d[i-1]))
	  mxm1=abs(d[i]-d[i-1]);
	}
	for(int i=1;i<n;i++){
	    if(mxm2<abs(b[i]-b[i-1]))
	    mxm2=abs(b[i]-b[i-1]);
	}
	if(mxm2==mxm1)
	cout<<"Tie"<<endl;
	else if(mxm2>mxm1)
	cout<<"Brian"<<endl<<mxm2<<endl;
	else
	cout<<"Dom"<<endl<<mxm1<<endl;
    return 0;
}
