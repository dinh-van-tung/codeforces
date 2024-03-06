#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <iomanip> 
using namespace std;
#define en '\n';
typedef long long ll;
typedef long double ld;
ll mod = 1e9 + 7;

int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);

     //freopen("ROBOT.INP", "r", stdin);
     //freopen("ROBOT.OUT", "w", stdout);

     ll t;
     cin >> t;
     while (t--)
     {
          ll n;
          cin >> n;
          if (n == 4)
               cout << 26 << '\n';
          else
          {
               ll temp = n - 5;
               //cout << temp << '\n';
               cout << 26 + (11 + (11 + temp * 2)) / 2 * (temp + 1) << '\n';
          }
     }
     return 0;
}