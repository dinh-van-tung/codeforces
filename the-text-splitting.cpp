// DINH VAN TUNG
#include <iostream>
#include <math.h>
#include <algorithm>
#include <set>
#include <stdlib.h>
#include <time.h>
#include <vector>      
#include <string>
#include <map>
#include <stack>
#include <queue>
#include <numeric>
#include <iomanip>
using namespace std;
typedef long long ll;
typedef long double ld;
// typedef unsigned long long ll;
ll mod = 1e9 + 7;

int main()
{
     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     // freopen("lucky.inp", "r", stdin); freopen("lucky.out", "w", stdout); 

     ll n, p, q; cin >> n >> p >> q;
     string s; cin >> s;

     ll y = 0, x = 0;
     while (y * q <= n)
     {
          if ((n - y * q) % p == 0)
          {
               x = (n - y * q) / p;
               break;
          }
          y += 1;
     }

     if (y * q > n) cout << "-1\n";
     else
     {
          cout << x + y << '\n';
          ll index = 0;
          for (ll i = 1; i <= x; i++)
          {
               cout << string (s.begin() + index, s.begin() + index + p) << '\n';
               index += p;
          }
          for (ll i = 1; i <= y; i++)
          {
               cout << string (s.begin() + index, s.begin() + index + q) << '\n';
               index += q;
          }
     }
     return 0;
}
// DINH VAN TUNG
