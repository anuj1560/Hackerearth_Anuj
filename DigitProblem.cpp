#include<iostream>
using namespace std;
int main()
{
string x;
int k;
cin>>x>>k;

for(int i=0;i<x.size();i++)
{
if(k>0){
if(x[i]!='9'){
x[i]='9';
k--;
}
}
}
cout<<x<<endl;

return 0;
}
