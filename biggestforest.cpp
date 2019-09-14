#include<bits/stdc++.h>
using namespace std;
const int MAX = 1000;

int n;
char a[MAX][MAX];

int result(int x,int y)
{
  if(x<n && y<n && x>=0 && y>=0 && a[x][y]=='T')
  {
    a[x][y]='W';
    return result(x-1,y)+ result(x,y-1) + result(x+1,y) + result(x,y+1)+1;
  }
  else 
    return 0;
}

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int count=0;
  cin>>n;
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;++j)
        cin>>a[i][j];
  }
  for(int i=0;i<n;++i)
  {
      for(int j=0;j<n;++j)
      {
        if(a[i][j]=='T') 
            count=max(count,result(i,j));
      }
  }
  cout<<count;
  return 0;
}
