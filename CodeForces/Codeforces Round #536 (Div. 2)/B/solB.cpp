#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

#define pb push_back
#define mp make_pair
#define f first
#define s second

using namespace std;

const int N = 10e5 + 50;

long long n, m, a[N], c[N];
long long s[N];

int main(){
    //ifstream cin("input.txt");

    int i, j;

    cin >> n >> m;

    for(i = 1; i <= n; i++)
        cin >> a[i];

    for(i = 1; i <= n; i++)
        cin >> c[i];

    vector < pair < int, int > > v;

    for(i = 1; i <= n; i++)
        v.pb(mp(c[i], i));

    sort(v.begin(), v.end());

    /*for(a : v)
        cout << a.s << " " << a.f << "\n";
    cout<<"\n\n";*/

    long long sum;
    long long p = 0, k, t, l, tmp;

    for(i = 1, sum = 0; i <= m; i++, sum = 0){
        cin >> t >> k;

        if(a[t] >= k){
            s[i] += k * c[t];
            a[t] -= k;
        }
        else{
            sum += a[t] * c[t];
            l = k - a[t];
            a[t] = 0;

            for(j = p; j < v.size() && l > 0; j++){
                tmp = min(a[v[j].s], l);
                sum += tmp * c[v[j].s];
                l -= tmp;
                a[v[j].s] -= tmp;
            }

            p = j - 1;

            if(l > 0){
                break;
            }
            else{
                s[i] = sum;
            }
        }
    }

    for(i = 1; i <= m; i++)
        cout << s[i] << "\n";

    return 0;
}

