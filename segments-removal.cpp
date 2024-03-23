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

int main()
{
     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
     // freopen("lucky.inp", "r", stdin); freopen("lucky.out", "w", stdout); 

     ll n; cin >> n;
     ll a[n + 1]; a[0] = 0;
     for (ll i = 1; i <= n; i++)
          cin >> a[i];

     set<pair<ll, ll> > se;
     priority_queue<pair<ll, ll> > pq;

     ll cnt = 1, left = 1;
     for (ll i = 2; i <= n; i++)
     {    
          if (a[i] == a[i - 1]) cnt++;
          else
          {
               se.insert(make_pair(left, cnt));
               pq.push(make_pair(cnt, -left));
               cnt = 1;
               left = i;
          }
     }
     se.insert(make_pair(left, cnt));
     pq.push(make_pair(cnt, -left));

     ll ans = 0;
     while (!pq.empty())
     {
          ll length = pq.top().first, index = -pq.top().second;
          pq.pop();
          set<pair<ll, ll> > :: iterator it = se.find(make_pair(index, length));
          if (it != se.end())
          {
               //cout << it -> first << ' ' << it -> second << '\n';
               set<pair<ll, ll> > :: iterator en = se.end();
               --en;
               if (it != se.begin() && it != en)
               {
                    set<pair<ll, ll> > :: iterator ittemp1 = it, itttemp2 = it;
                    set<pair<ll, ll> > :: iterator pre = --ittemp1, next = ++itttemp2;
                    se.erase(it);
                    if (a[pre -> first] == a[next -> first])
                    {
                         ll length_temp = pre -> second + next -> second, index_temp = pre -> first;
                         se.erase(pre);
                         se.erase(next);
                         se.insert(make_pair(index_temp, length_temp));
                         //cout << "them vao pq " << length_temp << ' ' << -index_temp << '\n';
                         pq.push(make_pair(length_temp, -index_temp));
                    }
               }
               else
                    se.erase(it);
               ans++;
          }
          
     }
     cout << ans << '\n';
     return 0;
}
// DINH VAN TUNG