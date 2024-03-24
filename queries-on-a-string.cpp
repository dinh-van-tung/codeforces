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
using namespace std;
typedef long long ll;
typedef long double ld;
// typedef unsigned long long ll;

int main()
{
     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     // freopen("lucky.inp", "r", stdin); freopen("lucky.out", "w", stdout); 

     string s; cin >> s;
     ll q; cin >> q;
     while (q--)
     {
          ll l, r, k; cin >> l >> r >> k;
          ll n = r - l + 1;
          k %= n;
          deque<char> dq(s.begin() + l - 1, s.begin() + r);
          while (k--)
          {
               dq.push_front(dq.back());
               dq.pop_back();
          }
          ll i = l - 1;
          while (dq.empty() == false)
          {
               s[i] = dq.front();
               dq.pop_front();
               i += 1;
          }
     }
     cout << s;
     return 0;
}
// DINH VAN TUNG