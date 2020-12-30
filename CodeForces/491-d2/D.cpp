#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <iomanip>
#include <cstring>

using namespace std;

int i, j, k, ans;
char s[2][104];

int main(){
	freopen("input.txt", "r", stdin);
	
	cin >> s[0] >> s[1];
	
	k = strlen(s[0]);

	cout << s[0] << endl << s[1];
	
	for(i = 0; i < k; i++)
		for(j = 0; j < k; j++)
			if(s[i][j] == '0'){
				if(s[i + 1][0] == '0' && s[i][j + 1] == '0' && i + 1 < 2 && j + 1 < k){
					s[i][j] = s[i + 1][0] = s[i][j + 1] = '0';
					ans++;
				}
				if(s[i + 1][0] == '0' && s[i + 1][j + 1] == '0' && i + 1 < 2 && j + 1 < k){
					s[i][j] = s[i + 1][0] = s[i + 1][j + 1] = '0';
					ans++;
				}
				if(s[i][j + 1] == '0' && s[i + 1][j + 1] == '0' && i + 1 < 2 && j + 1 < k){
					s[i][j] = s[i][j + 1] = s[i + 1][j + 1] = '0';
					ans++;
				}
				if(s[i + 1][j] == '0' && s[i + 1][j - 1] == '0' && i + 1 < 2 && j + 1 >= 0){
					s[i][j] = s[i + 1][j] = s[i + 1][j - 1] = '0';
					ans++;
				}
			}
			
	cout << endl << ans;
	
	return 0;
}
