#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);
#define T() int t; cin>>t;while(t--)
#define CLEAR(a) memset((a),0,sizeof(a))
#define all(v) v.begin(), v.end()
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define sz size
#define ln length
using namespace std;
     
template<typename T> T gcd(T a, T b){return (b?__gcd(a,b):a);}
template<typename T> T lcm(T a, T b){return (a*(b/gcd(a,b)));}
     
typedef long long int LL;
typedef vector<int> VI;
typedef vector<LL> VL;
typedef pair<int,int> PI;
typedef pair<LL,LL> PL;

const int MOD = 1e9 + 7;
const int INF = 1e9;
const int MAX = 1e5 + 5;
const int N = 1e6 + 5;


void solve(LL n){
	if(n == 1){
		cout << n << "\n";
		return;
	}
	cout << n << " ";
	n = n%2 == 0 ? n/2 : 3*n+1;
	solve(n);
}

int main() {
	FIO
	LL n;
	cin >> n;
	solve(n);
	return 0;
}