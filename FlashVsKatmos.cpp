#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countBits(int a) 
{ 
    int count = 0; 
    while (a) 
    { 
        if (a & 1 ) 
            count+= 1; 
        a = a>>1; 
    } 
    return count; 
} 

void sortArr(int arr[], int n) 
{ 
  vector<vector<int> > count(32); 
    int setbitcount = 0; 
    for (int i=0; i<n; i++) 
    { 
        setbitcount = countBits(arr[i]); 
        count[setbitcount].push_back(arr[i]); 
    } 
  
    int j = 0;   
    for (int i=0; i<32; i++) 
    { 
        vector<int> v1 = count[i]; 
        for (int i=0; i<v1.size(); i++) 
            arr[j++] = v1[i]; 
    } 
    for (int i=0; i<n; i++) 
        cout << arr[i] << " ";
}

int main() {
	int t;
	cin >> t;										
	while(t--){
	    int n;
	    cin >>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin >>arr[i];
	    
	    sortArr(arr,n);
	    cout<<endl;
	}
	return 0;
}
