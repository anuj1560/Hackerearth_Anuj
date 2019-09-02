#include <iostream>

using namespace std;

int leap(int y) 
{ 
    if (y%400==0 || y%100!=0 && y%4==0) 
        return 2; 
    return 1; 
} 
 
int next(int y) 
{ 
    int days = leap(y); 
    int x = y + 1; 
    for (int sum=0; ; x++) 
    { 
        sum = (sum + leap(x)) % 7; 
        if ( sum==0 && (leap(x) == days)) 
            return x; 
    } 
  
    return x; 
} 
 
int main() 
{ 
    int y;
    cin >>y;
    cout << next(y); 
    return 0; 
}
