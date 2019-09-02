#include <iostream>

using namespace std;

int isPalindrome(int n) 
{ 
    int rev = 0; 
    for (int i = n; i > 0; i /= 10) 
        rev = rev*10 + i%10; 
    return (n==rev); 
} 
int main() {
	int t;
	cin >>t;
	while(t--){
	    int a,b;
	    cin >>a>>b;
	    int count=0;
	    for(int i=a;i<=b;i++)
	    {
	        int result=isPalindrome(i); 
            count+=result;
	    }
	    cout<<count<<endl;
	}

    return 0;
}
