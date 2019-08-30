#include <bits/stdc++.h>
using namespace std;

int main()
{ 
	int t,n1,n2; 
	char s1[100001],s2[100001];
	int h1[26];
	int h2[26];
	
	cin >>t;
	
	while(t--)
	{ 
	    int f=0;
	   for(int i=0;i<26;i++)
	{
		h1[i]=0;
		h2[i]=0;
	}
	cin >>s1>>s2;
	n1=strlen(s1);
	n2=strlen(s2);
	for(int i=0;i<n1;i++)
		h1[s1[i]-97]++;
	for(int i=0;i<n2;i++)
		h2[s2[i]-97]++;	
	for(int i=0;i<26;i++)
	{
	    if(h1[i] && h2[i])
	    f=1;
	}
	if(f==1)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	}
	return 0;
}
