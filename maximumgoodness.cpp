#include <bits/stdc++.h>
using namespace std;
int main(){
    long n, k, sum = 0, temp=0, max = 0, j=0;
    cin>>n;
    vector<long> a;
    for(int i=0; i<n; i++)
    {
        cin>>k;
        if(k==1)
          a.push_back(1);
        else
          a.push_back(-1);

        sum = sum + a[i];
        if(sum<0)
        {
            sum = 0;
            j=0;
        }
        else
        {
            j++;
            if(temp<=sum)
            {
                max=j;
                temp = sum;
            }

        }

    }

    cout<<max;

    return 0;
}

