#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        
        vector<int> arr(n);
        for(int i = 0; i < n-1; i++) cin >> arr[i];

        int a = 0, b = 0;
        for(int i = 0; i < n-1; i++)
        {
            if(arr[i] >= 0) a += arr[i];
            else b += arr[i]; 
        }
        
        
        if(a > b)
        {
            int d = -(a+b);
            cout << d << endl;
        }
        
        else
        {
            int d = -(b+a);
            cout << d << endl;
        }
        

    }

}
