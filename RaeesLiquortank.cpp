#include <iostream>

using namespace std;

int main() {
  int n;
  cin >>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin >>a[i];
  int maxValue = 0;
  int total = 0;
  int lookAhead[n];

for(int i=0;i<n;i++)
{
    if(a[i] > maxValue) maxValue = a[i];
    lookAhead[i] = maxValue;
}

maxValue = 0;
for(int i=n-1;i>=0;i--)
{
    if(a[i] >= maxValue)
    { 
        maxValue = a[i];
    }
    else
    {
        if(maxValue > lookAhead[i])
        {
            if(lookAhead[i] > a[i])
            {
                total += lookAhead[i] - a[i];
            }
        }
        else
            total += maxValue - a[i];
    } 
}
cout<<total<<endl;
return 0;
}
