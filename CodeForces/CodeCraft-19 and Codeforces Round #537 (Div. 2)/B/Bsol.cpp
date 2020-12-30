#include <bits/stdc++.h>

#define pb push_back
#define f first
#define s second
#define mp make_pair

#define pi pair < int, int >

typedef long long ll;

using namespace std;

const int N = 1e5 + 50;

long long a[N], b[N];

int main(){
	//freopen("input.txt", "r", stdin);

    int i, j, n, k, m, x = 0, mx;
    double ans = 0.0;

    cin >> n >> k >> m;

    for(i = 1; i <= n; i++)
        cin >> a[i];

    sort(a + 1, a + n + 1);

    mx = a[n];

    for(i = 1; i < n; i++){
        if(a[i] < mx && m){
            a[i] = -1;
            m--;
        }
    }

    for(i = n; i >= 1; i--){
            if(a[i] != -1){
                while(b[i] < k && m){
                a[i]++;
                b[i]++;
                m--;
            }
        }
    }

    /*for(i = 1; i <= n; i++)
            cout << a[i] << " ";*/

    cout << "\n\n";

    for(i = 1; i <= n; i++)
        if(a[i] != -1){
            ans += a[i];
            x++;
        }

    printf("%6lf", ans / x);

	return 0;
}


