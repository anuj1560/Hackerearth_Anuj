#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin >>t;
	while(t--){
	    int n;
	    cin >>n;
	    int temp=n;
	    int count=0;
	    int i=1;
	    if(n==1)
	    cout<<"1"<<endl;
	    else{
	    while((count+i)<temp){
	      count+=i;
	      temp--;
	      i++;
	    }
	    int diff=temp-count;
	    count+=diff;
	    cout<<count+temp<<endl;
	    }
	    
	}

    return 0;
}
