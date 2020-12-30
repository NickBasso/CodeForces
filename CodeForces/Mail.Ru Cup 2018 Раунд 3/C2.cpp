#include <bits/stdc++.h>

#define pb push_back
#define f first
#define s second
#define mp make_pair

#define pi pair < int, int >


using namespace std;

const int N = 2010;

int n, m, t, x, y, ms, cm, s1, s2, pmxa;
vector<pair<int,int>>a;
int org[N];
bool c;
int u[N], uc[N];
vector < pair < pair < int, int >, pair < int, int > > > p;
map<int,int>ll;


int main(){
	freopen("input.txt", "r", stdin);
	
	int i, j, k, d = 0, lt = 1;

	cin >> n >> m;
	
	ms = 2 * n;
	
	for(i = 1; i <= ms; i++){
		scanf("%d", &x);

		org[i] = x;
		
		a.pb(mp(x, i));
	}	
		
	sort(a.begin(), a.end());
	
	/*for(j=0;j<ms;j++)
		cout<<a[j].s<<" "<<a[j].f<<"\n";
	cout<<"\n\n\n";*/
		
	for(j = 1; j <= m; j++){
		scanf("%d%d", &x, &y);
		
		if(org[x] >= org[y])	p.pb(mp(mp(org[x], org[y]), mp(x, y)));
		else					p.pb(mp(mp(org[y], org[x]), mp(y, x)));
		
		ll[x] = y;
		ll[y] = x;
	}
	
	sort(p.begin(), p.end());
	
	/*for(i = 0; i < p.size(); i++)
		cout << p[i].f.f << " " << p[i].s.f << " | " << p[i].f.s << " " << p[i].s.s << "\n";	
		
	cout << "\n\n\n";*/
	
	scanf("%d", &t);
	
	int last = 0;
	
	if(t == 2){
		scanf("%d", &k);
		
		if(k == -1){
			exit(0);
		}
		
		u[k] = 1;
		last = k;
		d++;
	}
	
	while((d <= ms && t == 2) || (d < ms && t == 1)){
		if(ll.count(last)){
			printf("%d\n\n", ll[last]);
			fflush(stdout);
			
			u[ll[last]] = 1;
			d++;
			
			lt = 2;
			
			if(d < ms - 1){
				scanf("%d", &k);
				
				if(k == -1){
					exit(0);
				}
				
				last = k;
				u[k] = 1;
				d++;
				
				if(!ll.count(last))
					lt = 1;
			}
		}
		else if(!ll.count(last) && lt == 2){
			scanf("%d", &k);
			
			if(k == -1){
				exit(0);
			}
				
			u[k] = 1;
			d++;
			
			lt = 1;
		}
		else if(!ll.count(last)){
			last = 0;
			
			if(p.size()){
				j = p.size() - 1;
				
				while(j >= 0 && u[p[j].s.f]){
					p.erase(p.begin() + p.size() - 1);
					j--;
				}
				
				if(j >= 0){
					s1 += p[j].f.f;
					u[p[j].s.f] = 1;
					
					printf("%d\n\n", p[j].s.f);
					fflush(stdout);
					d++;
					
					p.erase(p.begin() + p.size() - 1);
					
					scanf("%d", &k);
					
					if(k == -1){
						exit(0);
					}
					
					u[k] = 1;
					d++;
				}	
			}
			else{
				pmxa = a.size() - 1;
				
				while(u[a[pmxa].s])
					pmxa--;
					
				s1 += a[pmxa].f;
				u[a[pmxa].s] = 1;
				
				printf("%d\n\n", a[pmxa].s);
				fflush(stdout);
				d++;
				
				lt = 2;
			}
		}
	}
	
	
	cout << "\n\n\n" << s1;
	
	return 0;
}
