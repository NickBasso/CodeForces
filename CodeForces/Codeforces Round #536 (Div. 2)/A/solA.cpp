#include <iostream>
#include <fstream>

using namespace std;

const int N = 500 + 50;

char a[N][N];

int main(){
    //ifstream cin("input.txt");

    int n, ans = 0, i, j;

    cin >> n;

    for(i = 0; i <= n + 1; i++)
        for(j = 0; j <= n + 1; j++)
            a[i][j] = '.';

    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++)
            cin >> a[i][j];

    /*for(i = 0; i <= n + 1; i++, cout<<"\n")
        for(j = 0; j <= n + 1; j++)
            cout << a[i][j];*/

    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++){
            if(a[i][j] == 'X' && a[i - 1][j + 1] == 'X' && a[i - 1][j - 1] == 'X' && a[i + 1][j + 1] == 'X' && a[i + 1][j - 1] == 'X')
                ans++;
        }

    cout << ans;

    return 0;
}
