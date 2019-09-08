#include <iostream>
#include <string>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >>s;
    int love = 0;
for (int i=0; i <s.size() - 3 ; i++) { 
    if(s[i] == 'l'){
        for (int j=i+1; j < s.size() - 2; j++) { 
            if(s[j] == 'o'){
                for (int k=j+1; k < s.size() - 1; k++) { 
                    if (s[k] == 'v') {
                        for (int l=k+1; l < s.size(); l++) { 
                            if (s[l] == 'e') {
                                love = 1;
                                break;
                            }
                        }
                    }
                     
                }
            }
        }
 
    }
}
if(love==1)
cout<<"I love you, too!"<<endl;
else
cout<<"Let us breakup!"<<endl;
   return 0;
}
