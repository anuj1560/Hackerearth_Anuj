#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	    int n;
	    cin >>n;
	    int a[n],b[n];
	    int sum1=0;
	    int sum2=0;
	    int or1=0;
	    int or2=0;
	    for(int i=0;i<n;i++){
	    cin >>a[i];
	    sum1+=a[i];
	    or1=a[i]|or1;
	    }
	    for(int i=0;i<n;i++){
	    cin >>b[i];
	    sum2+=b[i];
	    or2=b[i]|or2;
	    }
	    sum1-=or1;
	    sum2-=or2;
	    if(sum1==sum2)
	    cout<<"1"<<endl;
	    else if(sum1>sum2)
	    cout<<"1"<<" "<<sum1-sum2<<endl;
	    else
	    cout<<"2"<<" "<<sum2-sum1<<endl;

    return 0;
}
