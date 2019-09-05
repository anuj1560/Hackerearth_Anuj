#include <iostream>
using namespace std;

int result()
{
	long long alpa1[26],alpa2[26],count;
    char s[100002],temp;
    int i;
    for(i=0;i<26;i++)
    {
    	alpa1[i]=0;
    	alpa2[i]=0;
    }
	cin.getline(s,100001);
    	for(i=0;s[i]!='\0';i++)
    	{
    		if(s[i]>='a' && s[i]<='z')
    			alpa1[s[i]-97]++;
    	}
    cin.getline(s,100001);
    	for(i=0;s[i]!='\0';i++)
    	{
    		if(s[i]>='a' && s[i]<='z')
    			alpa2[s[i]-97]++;
    	}
    for(i=0;i<26;i++)
    {
    	count=alpa1[i]-alpa2[i];
    	alpa2[i]=alpa2[i]-alpa1[i];
    	alpa1[i]=count;
    }
    int flag1=0,flag2=0;
    for(i=0;i<26;i++)
    {
        if(alpa1[i]>0)
    		flag1=1;
    	if(alpa2[i]>0)
    		flag2=1;
    }
    if(flag1==1 && flag2==1)
    	cout<<"You draw some."<<endl;
    else if(flag1==1)
    	cout<<"You win some."<<endl;
    else if(flag2==1)
    	cout<<"You lose some."<<endl;
    else
    	cout<<"You draw some."<<endl;
}

int main()
{
	int t;
	char s[10];
    cin>>t;
    cin.getline(s,100000);
    while(t--)
    {
    	result();
    }
    return 0;
}
