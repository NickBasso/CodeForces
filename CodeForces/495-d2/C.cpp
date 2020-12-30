#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define f first
#define s second

using namespace std;

int main(){
	//freopen("input.txt", "r", stdin);
	
	int n, a[100010] = {0}, i, j, ans = 0;
	set < int > s_nums;
	vector < pair < int, int > > pos(100100, mp(1e9, -1e9));
	
	cin >> n;
	
	for(i = 1; i <= n; i++){
		cin >> a[i];
		s_nums.insert(a[i]);
		
		if(pos[a[i]].f > i)
			pos[a[i]].f = i;
			
		if(pos[a[i]].s < i)
			pos[a[i]].s = i;
	}
	
	vector < int > nums (s_nums.begin(), s_nums.end());
	vector < pair < int, int > > pairs;
	
	/*for(i = 0; i < nums.size(); i++)
		cout << nums[i] << endl;
		
		cout << "\n\n\n";*/
		
	for(i = 0; i < nums.size(); i++)
		for(j = 0; j < nums.size(); j++)
			pairs.pb(mp(nums[i], nums[j]));
			
	/*for(i = 0; i < pairs.size(); i++){
		cout << pairs[i].f << "   " << pairs[i].s << "           min_pos: " << pos[pairs[i].f].f << "           max_pos:" << pos[pairs[i].s].s << "\n";
	}	
	cout << "\n\n\n\n";

	for(i = 1; i <= n; i++)
		cout << a[i] << ":    " << pos[a[i]].f << "      " << pos[a[i]].s << "\n";
		
	cout << "\n\n\n\n";*/
			
	for(i = 0; i < pairs.size(); i++)
		if(pos[pairs[i].f].f < pos[pairs[i].s].s)
			ans++;
			
	cout << ans;
	
	return 0;
}
