// Discussed Approach: https://docs.google.com/document/d/1GndxS92ayCuQOQTHVQvuxRdA7LS0sgfaZs2LvULT9rw/edit?tab=t.0

#include <iostream>
#include <map>
using namespace std;

int main()
{
    int t;
    cout << "Enter number of test cases: ";
    cin >> t;

    while (t--)
    {
        map<long, long> m;
        long long n;

        cout << "Enter number of elements: ";
        cin >> n;

        cout << "Enter " << n << " elements: ";
        for (int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;
            m[x]++; // Count frequency of each unique number
        }

        // If there are 3 or more different numbers, print No
        if (m.size() >= 3)
            cout << "No\n";
        else
        {
            // Get frequency of smallest key
            long long freq1 = (*m.begin()).second;

            // Get frequency of largest key
            long long freq2 = (*m.rbegin()).second; // or (*--m.end()).second is also ok

            // If both frequencies are equal
            if (freq1 == freq2)
            {
                cout << "Yes\n";
            }
            // If total elements are odd and freq difference is 1
            else if (n % 2 == 1 && abs(freq1 - freq2) == 1) // or 
            {
                cout << "Yes\n";
            }
            else
            {
                cout << "No\n";
            }
        }
    }

    return 0;
}
