#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
const int INF = (int)1e9 + 7;
#define deb(x) cerr << #x << " = " << x << endl
#define sz(a) (int)(a).size()
#define all(a) (a).begin(), (a).end()
#define sq(x) (x) * (x)
#define fi first
#define se second
#define UNIQUE(a) sort(all(a)), (a).erase(unique(all(a)), (a).end())
#define FOR(i, a, b) for (int i(a); i < b; ++i)
#define REP(i, n) FOR (i, 0, n)
#define FORD(i, a, b) for (int i(a); i >= b; --i)

const int MN = 2e5 + 7;
ll N, M;

ll lines (ll v) {
    ll k = 1, res = 0;
    while (ll(v/k) != 0) {
        res += v/k;
        k *= M;
    }
    return res;
}

int main (void) {
    while (cin >> N >> M) {
        ll ans = 0;
        for (ll k = (N>>1); k >= 1; k >>= 1) {
            while (ans + k < N && lines(ans + k) < N)
                ans += k;
        }
        cout << ans + 1 << '\n';
    }
    return 0;
}
