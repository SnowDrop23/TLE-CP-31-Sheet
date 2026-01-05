#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nline "\n"

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(nullptr);

	int t;
	cin >> t;
	
	while(t--)
	{
	    int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];
        

        int k = abs(a[0] - 1);
        for(int i = 1; i < n; i++) {
            int x = abs(a[i] - (i+1));
            k = __gcd(k, x);
        }
        cout << k << nline;
        
	}
}
