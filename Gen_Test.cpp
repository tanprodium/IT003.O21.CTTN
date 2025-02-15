// include
#include<bits/stdc++.h>

using namespace std;

// define
#define fi    first
#define se    second

#define pub   push_back
#define pob   pop_back
#define puf   push_front
#define pof   pop_front
#define eb    emplace_back
#define upb   upper_bound
#define lwb   lower_bound

#define left  VAN
#define right TAN

#define sz(a)               (int)a.size()
#define all(a)              (a).begin(),(a).end()
#define rall(a)             (a).rbegin(),(a).rend()
#define sort_and_unique(a)  sort(all(a));(a).resize(unique(all(a))-a.begin())
#define max_                max_element
#define min_                min_element

// another define
using ll  = long long;
using ld  = long double;
using pii = pair<int, int>;
using pil = pair<int, ll>;
using pli = pair<ll, int>;
using pll = pair<ll, ll>;
using mii = map<int, int>;
using mll = map<ll, ll>;

// random
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

// templates
template<class X, class Y>
    bool maximize(X &x, const Y &y) {
        if (y > x) {
            x = y;
            return (true);
        } else return (false);
    }

template<class X, class Y>
    bool minimize(X &x, const Y &y) {
        if (y < x) {
            x = y;
            return (true);
        } else return (false);
    }

template<class T>
    void print(const T &a, const int &l, const int &r) {
        for (int i = l; i <= r; i++)
            cout << a[i] << ' ';
        cout << '\n';
    }

// limit
const ll oo = 1e9;

// function
void yesno(bool x) {
    cout << (x ? "YES\n" : "NO\n");
}

ll rand(ll l, ll r) {
    ll len = r - l + 1;
    ll x = rng() % (len + 1);
    return (l + x);
}

void solve() {
    int n = 5e5;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        a[i] = rand(-oo, oo);
    }
    sort(a.begin(), a.end());
    cout << n << '\n';
    for (ll x : a) cout << x << ' ';
}

int main() {
    freopen("11.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t = 1;
    //cin >> t;

    while (t--) solve();
    return 0;
}

