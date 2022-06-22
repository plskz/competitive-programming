#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    string s;
    cin >> n >> k >> s;
    bool f = 0;
    if (s.find('G') < s.find('T')) {
        for (int i = s.find('G'); i < n; i += k) {
            if (s[i] == '#') {
                f = 0;
                break;
            }
            if (s[i] == 'T') {
                f = 1;
                break;
            }
        }
    } else {
        for (int i = s.find('G'); i >= 0; i -= k) {
            if (s[i] == '#') {
                f = 0;
                break;
            }
            if (s[i] == 'T') {
                f = 1;
                break;
            }
        }
    }
    cout << (f ? "YES" : "NO");

    return 0;
}

// 2nd sol
/*
    int n, k;
    string s;
    cin >> n >> k >> s;

    int start = s.find('G');
    int end = s.find('T');
    if(start > end) swap(start, end);
    if((end-start)%k != 0)
        return cout << "NO", 0;
    for(int i=start; i<=end; i+=k) {
        if(s[i] == '#')
            return cout << "NO", 0;
    }
    cout << "YES";
*/