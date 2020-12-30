#include <bits/stdc++.h>

#define pb push_back
#define f first
#define s second
#define mp make_pair

#define pi pair < int, int >

typedef long long ll;
typedef unsigned long long ull;

using namespace std;

const ull N = 1e5+50;

ull A, B, k, n, a[N], ans = 1e18, mxl;

ull dfs(ull fr, ull to, ull av){
    ull cen = av * (to - fr + 1) * B;

    if(av == n && cen < ans){
        ans = cen;
    }

    if(to - fr > 0){
        ull i, j, c1 = 0, c2 = 0, p1, p2;

        for(i = k; i >= 1; i--)
            if(a[i] <= to / 2)
                p1 = i;

        for(i = 1; i <= p1; i++)
            if(a[i] <= to / 2 && a[i] >= fr)
                c1++;


        for(i = 1; i <= k; i++)
            if(a[i] >= to / 2)
                p2 = i;

        for(i = p2; i <= to; i++)
            if(a[i] <= to && a[i] >= to / 2)
                c2++;

        ull tmp;

        if(to - fr == 1){
            tmp = c1+dfs(fr + 1, to, c2);

            if(tmp < ans){
                ans = tmp;
            }

            tmp = c2+dfs(fr, to - 1, c1);

            if(tmp < ans){
                ans = tmp;
            }
        }

        tmp = c1+dfs((to) / 2 + 1, to, c2);
        if(tmp < ans){
            ans = tmp;
        }

        tmp = c2+dfs(fr, to / 2, c1);
        if(tmp < ans){
            ans = tmp;
        }

        tmp = dfs((to + 1) / 2 + 1, to, c2) + dfs(fr, to / 2, c1);
        if(tmp < ans){
            ans = tmp;
        }
    }

    return av;
}

int main(){
	freopen("input.txt", "r", stdin);

    cin >> n >> k >> A >> B;

    for(int i = 1; i <= n; i++)
        cin >> a[i];

    mxl = pow(2, n);

    dfs(1, mxl, k);

    cout << ans;

	return 0;
}


