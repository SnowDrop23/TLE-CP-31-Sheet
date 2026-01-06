#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // freopen("m.txt", "r", stdin); // Reads input from input.txt
    // freopen("output.txt", "w", stdout);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, c = 0;
        cin >> n;
        vector<ll> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        for(int i = 1; i < n; i++)
        {
            if(a[i] % 2 == a[i-1] % 2) c++;
        }
        cout << c << endl;

    }
}
