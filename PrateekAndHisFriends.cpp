#include <iostream>
#define ll long long int
using namespace std;

int main() {
	int t;
       scanf("%d",&t);
       while(t--)
       {
              ll i,n,x,j;
              scanf("%lld%lld",&n,&x);
              ll a[n];
              ll sum=0;
              for(i=0;i<n;i++)
                scanf("%lld",&a[i]);
              j = 0;
              for(i=0;i<n;i++)
              {
                if(sum + a[i] <= x)
                    sum = sum + a[i];
                else
                {
                    sum = sum - a[j];
                    j++;
                    i--;
                }
                if(sum==x)
                {
                    printf("YES\n");
                    i=n;
                }
              }
              if(i==n)
              {
                     printf("NO\n");
              }
       }
       return 0;
}
