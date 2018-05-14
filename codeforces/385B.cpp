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
string S, bear = "bear";

int main (void) {
    while (cin >> S) {
        int n = sz(S);
        int ans = 0;
        int last = -1;
        REP(i, n-3) {
            int x = 0;
            while (x < sz(bear) && i+x < n && bear[x] == S[i+x])
                ++x;
            if (x == sz(bear)) {
                ans += (i - last) * (n - 3 - i);
                last = i;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
