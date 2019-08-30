#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int a;
	cin >> a;
	int number_of_bits = floor(log2(a))+1; 
    int m=((1 << number_of_bits)- 1) ^ a;
	cout<<a<<" "<<m<<endl;
	return 0;
}
