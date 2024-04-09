#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);
#define T() int tt; cin >> tt; while(tt--)
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
typedef pair<int, int> PI;
typedef pair<LL, LL> PL;
 
const int MOD = 1e9 + 7;
const int INF = 1e9;
const int MAX = 1e5 + 5;
const int N = 1e6 + 5;
 
 
int main() 
{
    FIO
    int n;
    cin >> n;
    vector<LL> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    LL minMoves = 0LL;
    for(int i=1; i<n; i++){
        if(arr[i] < arr[i-1]){
            minMoves += (arr[i-1] - arr[i]);
            arr[i] = arr[i-1];
        }
    }
    cout << minMoves << "\n";

	return 0;
}