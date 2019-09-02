#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	int n;
	cin >>n;
	int space,i,j;
for(i = 1; i <= n; i++)
   {
      for(space = i; space < n; space++)
      {
         cout << " ";
      }
      
      for(j = 1; j <= (2 * i - 1); j++)
      {
         cout << "*";
      }

      cout << "\n";
   }
	}
return 0;
	}
