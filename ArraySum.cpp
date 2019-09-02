#include <vector>
#include <iostream>

using namespace std;

int main() {
	int num;
	cin >> num;										
    vector<unsigned long long int>a(num);
    unsigned long long int sum=0;
    for(int i=0;i<num;i++){
    cin >>a[i];
    sum+=a[i];
}
  cout<<sum<<endl;  
    
}
