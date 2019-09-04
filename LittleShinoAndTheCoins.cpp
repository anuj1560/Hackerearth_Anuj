#include <iostream>
using namespace std;

int main()
{
    int count=0;
	int i, j, k, a, b, c, x, y;
	int alpa[26]={0};
	string str;
	cin >> k;
	cin >> str;

	for (i = 0; str[i] != '\0'; ++i) {
		for (j = 0; j < 26; ++j)
			alpa[j] = 0;
		a = 0;
		for (j = i; str[j] != '\0'; ++j) {
			if (alpa[str[j] - 'a'] == 0) {
				alpa[str[j] - 'a'] = 1;
				a++;
			}
			if (a == k) {
				count++;
			}
		}
	}

	cout <<count<< endl;

	return 0;
}
