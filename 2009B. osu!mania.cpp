#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n; 
    cin >> n;
    vector<int> ans(n);
    for (int i = 0; i < n; ++i)
    {
      string r;
      cin >> r;
      for (int j = 0; j < 4; ++j)
      {
        if (r[j] == '#')
        {
          ans[n - i - 1] = j + 1;
          break;
        }
      }
    }
    for (int i = 0; i < n; ++i)
    {
      cout << ans[i] << " ";
    }
    cout << endl;
  }
  return 0;
}
