#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

#define ll long long

using namespace std;

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

int a[105];

int get(int a[], int n) {
    int ans = 0;
    for (int i = 1; i <= n - 1; i++) {
        int mn = i;
        for (int j = i; j <= n; j++) {
            if (a[i] > a[j]) {
                mn = min(mn, j);
            }
        }
        int pos = distance(a, find(a, a + n, mn));
        ans += pos - i + 1;
        // debug(i, pos, ans);
        reverse(a + i, a + pos + 1);
    }
    return ans;
}

void solve() {
    int n, c;
    cin >> n >> c;
    bool f = 0;
    for (int i = 1; i <= n; i++) a[i] = i;
    do {
        int b[105];
        copy(a + 1, a + n + 1, b + 1);

        if (get(b, n) == c) {
            f = 1;
            for (int i = 1; i <= n; i++) cout << a[i] << ' ';
            break;
        }
    } while (next_permutation(a + 1, a + n + 1));
    if (!f) cout << "IMPOSSIBLE";
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    int i = 1;
    while (t--) {
        cout << "Case #" << i++ << ": ";
        solve();
    }

    return 0;
}