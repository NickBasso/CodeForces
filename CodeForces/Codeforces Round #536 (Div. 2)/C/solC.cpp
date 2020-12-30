#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

const int N = 3 * 1e5 + 50;

int a[N];

int main(){
    //ifstream cin("input.txt");

    long long n, i, j, ans = 0;

    cin >> n;

    for(i = 1; i <= n; i++)
            cin >> a[i];

    sort(a + 1, a + n + 1);

    for(i = 0; i < n / 2; i++){
        ans += (a[i + 1] + a[n - i]) * (a[i + 1] + a[n - i]);
    }

    cout << ans;

    return 0;
}
