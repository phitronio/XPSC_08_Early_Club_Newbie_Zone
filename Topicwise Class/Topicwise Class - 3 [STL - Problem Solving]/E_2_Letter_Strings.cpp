#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    int n;
    cin >> n;
    vector<string> s(n);
    for(int i = 0; i < n; i++)
        cin >> s[i];
    map<string, int> freq;

    for(int i = 0; i < n; i++)
        freq[s[i]]++;

    ll ans = 0;
    for(int i = 0; i < n; i++)
    {
        freq[s[i]]--;
        string a = s[i], b = s[i];
        for(char ch = 'a'; ch <= 'k'; ch++)
        {
            a[0] = ch;
            b[1] = ch;
            if(a != s[i])
                ans += freq[a];
            if(b != s[i])
                ans += freq[b];
        }
    }
    cout << ans << "\n";
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }


    return 0;
}
