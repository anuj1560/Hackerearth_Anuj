#include <bits/stdc++.h>

using namespace std;

int main() {
    unsigned long long int n;
        while(cin >>n){
        int m=ffs(n);
            m--;
            m=pow(2,m);
            cout<<m;
            cout<<endl;
}
    return 0;
}
