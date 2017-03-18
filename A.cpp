#include <bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define F first
#define S second
using namespace std;
typedef long long ll;
const int maxn = 1e6+5;
ll r[maxn]; int n;
string s;
ll f (ll x) {
	if (x <= 0) return 0;
	ll qq = x/n, rr = x%n;
	ll ret = qq*r[n-1];
	if (rr) ret += r[rr-1];
	// cout << x << " " << qq << " " << rr << " " << ret << endl;
	return ret;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int tests; cin >> tests;
	for (int test=1;test<=tests;test++) {
		ll i, j; cin >> s >> i >> j;
		n = s.length();
		for (int i=0;i<n;i++) {
			r[i] = (s[i] == 'B') + (i ? r[i-1] : 0);
		}
		ll ans = f(j) - f(i-1);
		cout << "Case #" << test << ": " << ans << endl;
	}
}