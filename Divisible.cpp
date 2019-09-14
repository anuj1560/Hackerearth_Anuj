#include<bits/stdc++.h>
using namespace std;

string solve (vector<int> A) {
   int n=A.size();
   int rem;
   int count=0;
   for(int i=0;i<n/2;i++){
       if(i%2==0)
       {
            while(A[i]>0)
            {
                rem=A[i]%10;
                A[i]/=10;
            }
        count+=rem;
       }
       
       else
       {
            while(A[i]>0)
            {
                rem=A[i]%10;
                A[i]/=10;
            }
       count-=rem;
       }
   }
   
   for(int i=n/2;i<n;i++)
   {
      if(i%2==0)
       {
            rem=A[i]%10;
            count+=rem;
       }
       else
       {
            rem=A[i]%10;
            count-=rem;

       } 
   }
   if(count%11==0)
        return "OUI";
    else
        return "NON";
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i_A=0; i_A<N; i_A++)
    {
    	cin >> A[i_A];
    }

    string out_;
    out_ = solve(A);
    cout << out_;
}
