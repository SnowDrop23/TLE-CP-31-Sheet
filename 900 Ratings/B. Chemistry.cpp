#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        vector<int> freq(26, 0);
        for(char c : s) freq[c - 'a']++;

        int oddCount = 0;
        for(auto f : freq) if(f%2 != 0) oddCount++;

        if(oddCount - k <= 1) cout << "YES\n";
        else cout << "NO\n";
    }

}
