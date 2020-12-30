#include <bits/stdc++.h>

#define pb push_back
#define f first
#define s second
#define mp make_pair

#define pi pair < int, int >

typedef long long ll;

using namespace std;

int main(){
	//freopen("input.txt", "r", stdin);

    string a, b;
    char c[150] = {0};
    int i;

    c['a'] = c['e'] = c['i'] = c['o'] = c['u'] = 1;

    cin >> a >> b;

    if(a.size() != b.size()){
        cout << "No";
        return 0;
    }

    for(i = 0; i < a.size(); i++){
        if(c[a[i]] != c[b[i]]){
            cout << "No";
            break;
        }
    }

    if(i == a.size())
        cout << "Yes";

	return 0;
}


