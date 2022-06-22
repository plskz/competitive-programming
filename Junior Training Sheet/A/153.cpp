#include <bits/stdc++.h>
#define ll long long
#define all(x) (x).begin(), (x).end()
#define allr(x) (x).rbegin(), (x).rend()

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    reverse(all(s));
    for (auto x : s) {
        switch (x) {
            case '0':
                cout << "O-|-OOOO\n";
                break;
            case '1':
                cout << "O-|O-OOO\n";
                break;
            case '2':
                cout << "O-|OO-OO\n";
                break;
            case '3':
                cout << "O-|OOO-O\n";
                break;
            case '4':
                cout << "O-|OOOO-\n";
                break;
            case '5':
                cout << "-O|-OOOO\n";
                break;
            case '6':
                cout << "-O|O-OOO\n";
                break;
            case '7':
                cout << "-O|OO-OO\n";
                break;
            case '8':
                cout << "-O|OOO-O\n";
                break;
            case '9':
                cout << "-O|OOOO-\n";
                break;
        }
    }

    return 0;
}

// my 2nd sol
/*
    string s;
    cin >> s;
    reverse(all(s));

    for(auto x : s) {
        int d = x-'0';
        cout << (d < 5 ? "O-|" : "-O|");
        d %= 5;
        for(int i=0; i<5; i++)
            cout << (d==i ? '-' : 'O');
        cout << '\n';
    }
*/