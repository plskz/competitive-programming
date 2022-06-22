#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

string v = "aeiouy";

bool vowel(char c) { return v.find(c) != -1; }

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n - 1;) {
        if (vowel(s[i]) && vowel(s[i + 1]))
            s.erase(i + 1, 1);
        else
            i++;
    }
    cout << s;

    return 0;
}