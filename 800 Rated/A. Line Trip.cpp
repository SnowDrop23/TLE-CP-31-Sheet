#include <bits/stdc++.h>
using namespace std;
int main ()
{

   int t;
   scanf("%d", &t);
   while(t--)
   {
      int n, x;
      cin >> n >> x;
      int arr[n];
      for(int i = 0; i < n; i++) cin >> arr[i];

      int res = 0, last = 0;
      for(int i = 0; i < n; i++)
      {
         res = max(res, arr[i] - last);
         last = arr[i];

      }
      res = max(res, 2*(x - arr[n-1]));
      cout << res << endl;
   }
   
}
